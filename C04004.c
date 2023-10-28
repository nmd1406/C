#include<stdio.h>

int fibonacci(int n)
{
    if(n <= 2) return 1;
    int a1 = 1, a2 = 1;
    int i = 3, a;
    while(i <= n)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        ++i;
    }
    return a;
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    int n;
    while(testCase--)
    {
        scanf("%d", &n);
        printf("%d\n", fibonacci(n));
    }
    return 0;
}