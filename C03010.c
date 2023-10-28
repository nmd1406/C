#include<stdio.h>

int factorial(int n)
{
    int tich = 1;
    for(int i = 1; i <= n; ++i)
    {
        tich *= i;
    }
    return tich;
}

int isStrongNumber(int n)
{
    int sum = 0;
    int temp = n;
    int b;
    while(n > 0)
    {
        b = n % 10;
        sum += factorial(b);
        n /= 10;
    }
    if(sum == temp) return 1;
    else return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i)
    {
        if(isStrongNumber(i)) printf("%d ", i);
    }
    return 0;
}