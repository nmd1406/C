#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i)
    {
        int c = 64;
        for(int j = 1; j <= i; ++j)
        {
            printf("%c", c);
            c += 2;
        }
        c -= 4;
        for(int k = i + 1; k <= 2 * i - 1; ++k)
        {
            printf("%c", c);
            c -= 2;
        }
        printf("\n");
    }
    return 0;
}