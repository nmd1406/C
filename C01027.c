#include<stdio.h>

int UCLN(int a, int b)
{
    int min = a < b ? a : b;
    int maxUC = 0;
    for(int i = min; i > 0; --i)
    {
        if(a % i == 0 && b % i == 0)
        {
            maxUC = i;
            break;
        }
    }
    return maxUC;
}

int main()
{
    int a, b, i;
    scanf("%d", &i);
    while(i--)
    {
        scanf("%d%d", &a, &b);
        printf("%d\n", UCLN(a, b));
    }
    return 0;
}