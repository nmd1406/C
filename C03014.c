#include<stdio.h>

long long gcd(long long a, long long b)
{
    if(a == 0 || b == 0)
        return a + b;
    return gcd(b % a, a);
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    long long a, b;
    while(testCase--)
    {
        scanf("%lld %lld", &a, &b);
        long long ucln = gcd(a, b);
        long long lcm = (a * b) / ucln;
        printf("%lld %lld", lcm, ucln);
        printf("\n");
    }
    return 0;
}