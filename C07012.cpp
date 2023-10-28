#include<stdio.h>

struct DanhSachMatHang
{
    char tenMatHang[100];
    char nhomHang[100];
    double giaMua;
    double giaBan;
    double loiNhuan;
    int maMatHang;
};

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    struct DanhSachMatHang arr[n];
    for(int i = 0; i < n; ++i)
    {
        fflush(stdin);
        scanf("\n%[^\n]s", arr[i].tenMatHang);
	    scanf("\n%[^\n]s", arr[i].nhomHang);
        scanf("%lf %lf", &arr[i].giaMua, &arr[i].giaBan);
        arr[i].maMatHang = i + 1;
    }
    for(int i = 0; i < n; ++i)
        arr[i].loiNhuan = (arr[i].giaBan - arr[i].giaMua);
    for(int i = 0; i < n - 1; ++i)
    {
        for(int j = i + 1; j < n; ++j)
        {
            if(arr[i].loiNhuan < arr[j].loiNhuan)
            {
                struct DanhSachMatHang temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; ++i)
    {
        printf("%d %s %s %.2lf\n", arr[i].maMatHang, arr[i].tenMatHang, arr[i].nhomHang, arr[i].loiNhuan);
    }
    return 0;
}