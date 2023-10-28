#include<stdio.h>

int dauCuoi(long long n)
{
    int chuSoCuoi = n % 10;
    int chuSoDau;
    while(n > 0)
    {
        chuSoDau = n % 10;
        n /= 10;
    }
    if(chuSoCuoi == chuSoDau * 2 || chuSoDau == chuSoCuoi * 2) return 1;
    else return 0;
}

int isThuanNghich(long long n)
{
    long long temp = n;
    int arr[20];
    int i = 0;
    int count = 0;
    while(temp > 0)
    {
        arr[i] = temp % 10;
        temp /= 10;
        ++count;
        ++i;
    }
    for(i = 1; i <= (count - 1) / 2; ++i)
    {
        if(arr[i] != arr[count - i - 1]) return 0;
    }
    return 1;
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    long long n;
    while(testCase--)
    {
        scanf("%lld", &n);
        if(dauCuoi(n) && isThuanNghich(n)) printf("YES");
        else printf("NO");
        printf("\n");
    }
    return 0;
}