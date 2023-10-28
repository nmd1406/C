#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int tich = 1;
    while(n > 0)
    {
        int temp = (n % 10);
        tich *= temp;
        n /= 10;
    }
    printf("%d", tich);
    return 0;
}