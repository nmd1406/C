#include<stdio.h>

int main()
{
    int chieuDai, chieuRong;
    scanf("%d%d", &chieuDai, &chieuRong);
    int max = chieuDai > chieuRong ? chieuDai : chieuRong;
    int min = chieuDai < chieuRong ? chieuDai : chieuRong;
    for(int i = chieuDai; i >= 1; --i)
    {
        printf("%d", max);
        if(i >= chieuRong)
        {
            for(int j = max - 1; j >= i - chieuRong + 1; --j)
            {
                printf("%d", j);
            }
        }
        else
        {
            for(int k = max - 1; k >= 1; --k)
            {
                printf("%d", k);
            }
            for(int h = 2; h <= min - i + 1; ++h)
            {
                printf("%d", h);
            }
        }  
        printf("\n");
        --max;
    }
    return 0;
}