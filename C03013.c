#include<stdio.h>

int fibonacci(int n)
{
    if(n == 0) return n;
    else if(n == 1 || n == 2) return 1;
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
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        printf("%d ", fibonacci(i));
    }
    return 0;
}