#include<stdio.h>

int tongChuSo(int n)
{
    int sum = 0;
    while(n > 0)
    {
        int x = n % 10;
        sum += x;
        n /= 10;
    }
    return sum;
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
        printf("%d\n", tongChuSo(arr[i]));
    }
    return 0;
}