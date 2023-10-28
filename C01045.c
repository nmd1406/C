#include<stdio.h>

int main()
{
    unsigned int n;
    scanf("%d", &n);
    int chuSoCuoi = n % 10;
    while(n >= 10)
    {
        n /= 10;
    }
    printf("%d %d", n, chuSoCuoi);
    return 0;
}