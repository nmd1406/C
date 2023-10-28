#include<stdio.h>

int main()
{
    double a, b;
    scanf("%lf%lf", &a, &b);
    double x;
    if(a == 0 && b != 0)
    {
        printf("Vo nghiem");
    }
    else if(a == 0 && b == 0)
    {
        printf("Vo so nghiem");
    }
    else if(a != 0 && b != 0)
    {
        x = (-b) / a;
        printf("%.2lf", x);
    }
    return 0;
}