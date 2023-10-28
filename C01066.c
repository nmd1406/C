#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int min = a;
    if(min > b)
    {
        min = b;
    }
    else if(min > c)
    {
        min = c;
    }
    printf("%d", min);
    return 0;
}