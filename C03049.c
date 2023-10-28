#include<stdio.h>

int soUuTheLe(long long n)
{
    if(n % 2 == 0) return 0;
    int countOdd = 0, countEven = 0;
    while(n != 0)
    {
        (n % 2 == 1) ? ++countOdd : ++countEven;
        n /= 10;
    }
    return (countOdd > countEven) ? 1 : 0;
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    long long n;
    while(testCase--)
    {
        scanf("%lld", &n);
        if(soUuTheLe(n)) printf("YES");
        else printf("NO");
        printf("\n");
    }
    return 0;
}