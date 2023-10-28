#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = n; i > 0; --i)
    {
        for(int k = 1; k <= n - i; ++k)
        {
            printf("0 ");
        }
        for(int j = 0; j < i; ++j)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}