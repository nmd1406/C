#include<stdio.h>

int main()
{
    int height;
    scanf("%d", &height);
    for(int i = 1; i <= height; ++i)
    {
        int a = 1;
        for(int j = 1; j <= i; ++j)
        {
            if(j == 1)
            {
                printf("%d", a);
            }
            else
            {
                printf("%d", a += 1);
                printf("%d", a += 1);
            }
        }
        printf("\n");
    }
}