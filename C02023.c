#include<stdio.h>

int main()
{
    int chieuDai, chieuRong;
    scanf("%d %d", &chieuDai, &chieuRong);
    for(int i = 1; i <= chieuDai; ++i)
    {
        int max = chieuDai > chieuRong ? chieuDai : chieuRong;
        for(int j = 1; j <= chieuRong; ++j)
        {
            if(j < i) printf("%c", 96 + max--);
            else printf("%c", 96 + max);
        }
        printf("\n");
    }
    return 0;
}