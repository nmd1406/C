#include<stdio.h>

int tongChuSo(long long n)
{
    int sum = 0;
    while(n > 0)
    {
        int chuSo = n % 10;
        sum += chuSo;
        n /= 10;
    }
    return sum;
}

int primeFactor(long long n)
{
    int c = 2;
    int sum = 0;
    while(n > 1)
    {
        if(n % c == 0)
        {
            sum += tongChuSo(c);
            n /= c;
        }
        else ++c;
    }
    return sum;
}

int main()
{
    long long n;
    scanf("%lld", &n);
    if(primeFactor(n) == tongChuSo(n)) printf("YES");
    else printf("NO");
    return 0;
}