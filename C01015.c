#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c , delta;
    scanf("%lf%lf%lf", &a, &b, &c);

    delta = b * b - 4 * a * c;
    if(a == 0 && b == 0 && c == 0)
    {
        return 0;
    }
    else if(delta > 0)
    {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("%.2lf %.2lf", x1, x2);
    }
    else if(delta == 0)
    {
        double x1 = -b / (2 * a);
        printf("%.2lf", x1);
    }
    else if(delta < 0)
    {
        printf("NO");
    }
    return 0;
}