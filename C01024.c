#include<stdio.h>

void dau_bang_cuoi(int n)
{
    int chuSoDau;
    int temp = n;
    while(temp > 10)
    {
        chuSoDau = (temp /= 10);
    }
    int chuSoCuoi = (n % 10);
    if(chuSoCuoi == chuSoDau) 
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
}

int main()
{
    int n;
    int arr[n];
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; ++i)
    {
        dau_bang_cuoi(arr[i]);
        printf("\n");
    }
    return 0;
}