#include<stdio.h>

int main()
{
    int h;
    scanf("%d", &h);
    for(int i = 1; i <= h; ++i)
    {
        int a = 1;
        for(int j = 1; j <= i; ++j)
        {
            printf("%d", a);
            if(i == j)
            {
                for(int k = 1; k <= i - 1; ++k)
                {
                    a -= 2;
                    printf("%d", a);
                }
            }
            else a += 2;
        }
        printf("\n");
    }
    return 0;
}