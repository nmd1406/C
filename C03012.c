#include<stdio.h>

int fibonacci(int n)
{
    int a1 = 1, a2 = 1;
    if (n == 1 || n == 2)
        return 1;
    int i = 3, a;
    while (i <= n)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    return a;
}

int main()
{
    int n;
    scanf("%d", &n);
    int count = 0;
    for(int i = 0; i < n; ++i)
    {
        if(n == fibonacci(i))
        {
            ++count;
            break;
        }
    }
    if(count == 1) printf("1");
    else printf("0");
    return 0;
}