#include<stdio.h>
#include<math.h>

int primeNumber(int n)
{
    for(int i = 2; i <= sqrt(n); ++i)
    {
        if(n % i == 0) return 0;
    }
    return 1;
}

int fibonacci(int n)
{
    int temp = 0;
    while(n > 0)
    {
        temp = temp + n % 10;
        n /= 10;
    }
    if(temp == 0) return 0;
    else if(n == 1) return 1;
    else
    {
        int a = 1, b = 1, c = 0;
        for(int i = 0; i <= temp; ++i)
        {
            c = a + b;
            a = b;
            b = c;
            if(c == temp) return 1;
        }
    }
    return 0;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        int temp = b;
        b = a;
        a = temp;
    }
    for(int i = a; i <= b; ++i)
    {
        if(fibonacci(i) && primeNumber(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}