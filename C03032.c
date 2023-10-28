#include<stdio.h>
#include<math.h>

int isPrimeNumber(int n)
{
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); ++i)
    {
        if(n % i == 0) return 0;
    }
    return 1;
}

int chuSoNguyenTo(int n)
{
    while(n > 0)
    {
        if(isPrimeNumber(n % 10) == 0) return 0;
        n /= 10;
    }
    return 1;
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    int a, b;
    while(testCase--)
    {
        scanf("%d%d", &a, &b);
        int count = 0;
        for(int i = a; i <= b; ++i)
        {
            if(isPrimeNumber(i) && chuSoNguyenTo(i)) ++count;
        }
        printf("%d\n", count);
    }
    return 0;
}