#include<stdio.h>

struct ThongTinSinhVien
{
    int maSV;
    char tenSV[100];
    char ngaySinh[100];
    double diem1, diem2, diem3;
    double tongDiem;
};

int main()
{
    int n;
    scanf("%d", &n);
    struct ThongTinSinhVien arr[n];
    for(int i = 0; i < n; ++i)
    {
        fflush(stdin);
        scanf("\n%[^\n]s", arr[i].tenSV);
        scanf("\n%[^\n]s", arr[i].ngaySinh);
        arr[i].maSV = i + 1;
        scanf("%lf%lf%lf", &arr[i].diem1, &arr[i].diem2, &arr[i].diem3);
        arr[i].tongDiem += (arr[i].diem1 + arr[i].diem2 + arr[i].diem3);
    }
    for(int i = 0; i < n - 1; ++i)
    {
        for(int j = i + 1; j < n; ++j)
        {
            if(arr[i].tongDiem < arr[j].tongDiem)
            {
                struct ThongTinSinhVien temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; ++i)
    {
        printf("%d %s %s %.1lf\n", arr[i].maSV, arr[i].tenSV, arr[i].ngaySinh, arr[i].tongDiem);
    }
    return 0;
}