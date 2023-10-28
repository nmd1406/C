#include<stdio.h>

int main()
{
    int row, col;
    scanf("%d%d", &row, &col);
    for(int i = 1; i <= row; ++i)
    {
        if(i > col)
        {
            for(int j = col; j >= 1; --j)
            {
                printf("%c", j + 64);
            }
        }
        int count = 0;
        for(int j = i; j <= col; ++j)
        {
            printf("%c", j + 64);
            ++count;
            if(j == col)
            {
                for(int k = col - count; k >= 1; --k)
                    printf("%c", k + 64);
            }
        }
        printf("\n");
    }
    return 0;
}