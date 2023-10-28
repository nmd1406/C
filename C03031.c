#include<stdio.h>

int gcd(long long a, long long b)
{
    if(a == 0 || b == 0)
    {
        return a + b;
    }
    return gcd(b % a, a);
}

int main()
{
    int a, b, c, d;
    int testCase;
    scanf("%d", &testCase);
    int i = testCase;
    while(testCase--)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        long long gcd1 = gcd(a, b);
        long long gcd2 = gcd(c, d);
        if(gcd1 == gcd2) printf("YES");
        else printf("NO");
        printf("\n");
    }
    return 0;
}