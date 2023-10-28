#include<stdio.h>

int main()
{
    int chieuDai, chieuRong;
    scanf("%d%d", &chieuDai, &chieuRong);
    for(int i = 1; i <= chieuDai; ++i)
    {
        if(i > chieuRong)
        {
            printf("%d", i);
            for(int j = i - 1; j >= i - chieuRong + 1; --j)
            {
                printf("%d", j);
            }
        }
        else
        {
            for(int k = i; k >= 1; --k)
            {
                printf("%d", k);
            }
            for(int h = 2; h <= chieuRong + 1 - i; ++h)
            {
                printf("%d", h);
            }
        }
        printf("\n");
    }
    return 0;
}