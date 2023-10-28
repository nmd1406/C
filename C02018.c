#include<stdio.h>

int main()
{
    int h;
    scanf("%d", &h);
    int b = h - 1;
    for(int i = 1; i <= h; ++i)
    {
        int a = 1;
        for(int l = 1; l <= b; ++l)
        {
            printf("~");
        }
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
        --b;
        printf("\n");
    }
    return 0;
}