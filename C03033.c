#include<stdio.h>

void thuaSoNguyenTo(long long n)
{
    for(int i = 2; i <= n; ++i)
    {
        int count = 0;
        while(n % i == 0)
        {
            ++count;
            n /= i;
        }
        if(count)
        {
            if(count > 1)
                printf("%d^%d", i, count);
            else printf("%d^1", i);
            if(n > i) printf(" * ");
        }
    }
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    long long n;
    while(testCase--)
    {
        scanf("%lld", &n);
        printf("%lld = ", n);
        thuaSoNguyenTo(n);
        printf("\n");
    }
    return 0;
}