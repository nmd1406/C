#include<stdio.h>

int main()
{
    unsigned int a, b;
    scanf("%d%d", &a, &b);
    if(b == 0)
    {
        printf("0");
    }
    else
    {
        printf("%d  ", a + b);
        printf("%d  ", a - b);
        printf("%d  ", a * b);
        printf("%.2f  ", (double)a / b);
        printf("%d", a % b);
    }
    return 0;
}