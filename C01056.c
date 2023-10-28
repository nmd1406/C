#include<stdio.h>
#include<stdbool.h>

bool check(long long n)
{
    long long a, b;
    long long temp = n;
    a = temp % 10;
    temp /= 10;
    while(temp != 0)
    {
        b = temp % 10;
        temp /= 10;
        if(b > a) return false;
        a = b;
    }
    return true;
}

int main()
{
    long long n;
    int testCase;
    scanf("%d", &testCase);
    while(testCase--)
    {
        scanf("%lld", &n);
        if(check(n)) printf("YES");
        else printf("NO");
        printf("\n");
    }
    return 0;
}