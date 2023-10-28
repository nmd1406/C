#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    int x = 0;
    while(n > 0)
    {
        x = n % 10;
        sum += x;
        n /= 10;
    }
    printf("%d", sum);
    return 0;
}