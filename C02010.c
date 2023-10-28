#include<stdio.h>

int main()
{
    int chieuDai, chieuRong;
    scanf("%d%d", &chieuDai, &chieuRong);
    for(int i = 1; i <= chieuDai; ++i)
    {
        int count = 0;
        if(i > chieuRong)
        {
            printf("%d", i);
            for(int j = chieuRong - 1; j >= 1; --j)
            {
                printf("%d", j);
            }
        }
        for(int j = i; j <= chieuRong; ++j)
        {
            printf("%d", j);
            ++count;
            if(j == chieuRong)
            {
                for(int k = chieuRong - count; k >= 1; --k)
                {
                    printf("%d", k);
                }
            }
        }
        printf("\n");
    }
    return 0;
}