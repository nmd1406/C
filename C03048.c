#include<stdio.h>

int soUuTheChan(long long n)
{
    if(n % 2 != 0) return 0;
    int countOdd = 0, countEven = 0;
    while(n != 0)
    {
        (n % 2 == 0) ? ++countEven : ++countOdd;
        n /= 10;
    }
    return (countEven > countOdd) ? 1 : 0;
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    long long n;
    while(testCase--)
    {
        scanf("%lld", &n);
        if(soUuTheChan(n) == 1) printf("YES");
        else printf("NO");
        printf("\n");
    }
    return 0;
}