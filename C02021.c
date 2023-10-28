#include<stdio.h>

int main()
{
    int h;
    scanf("%d", &h);
    for(int i = 1; i <= h; ++i)
    {
        printf("%d ", i);
        int k = i;
        int count = 0;
        for(int j = 1; j < i; ++j)
        {
            printf("%d ", k + h - 1);
            ++count;
            k = k + h - 1 - count;
        }
        printf("\n");
    }
    return 0;
}