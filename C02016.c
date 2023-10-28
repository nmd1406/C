#include<stdio.h>

int main()
{
    int h;
    scanf("%d", &h);
    for(int i = 1; i <= h; ++i)
    {
        int a = 1, b = 2;
        for(int j = 1; j <= i; ++j)
        {
            if(i % 2 == 0)
            {
                printf("%d", b);
                b += 2;
            } 
            else
            {
                printf("%d", a);
                a += 2;
            }
        }
        printf("\n");
    }
    return 0;
}