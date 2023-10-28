#include<stdio.h>

int ucln(int a, int b)
{
    if (a == 0 || b == 0)
        return a + b;
    return ucln(b % a, a);
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int Ucln = ucln(a, b);
    int bcln = a * b / Ucln;
    printf("%d\n", Ucln);
    printf("%d\n", bcln);
    return 0;
}