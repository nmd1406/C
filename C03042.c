#include<stdio.h>

int isSoGiam(long long n)
{
    int x = n % 10;
    n /= 10;
    while(n > 0)
    {
        int y = n % 10;
        n /= 10;
        if(x >= y) return 0;
        x = y;
    }
    return 1;
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    long long a, b;
    while(testCase--)
    {
        scanf("%lld %lld", &a, &b);
        int count = 0;
        for(long long i = a; i <= b; ++i)
        {
            if(isSoGiam(i)) ++count;
        }
        printf("%d\n", count);
    }
    return 0;
}