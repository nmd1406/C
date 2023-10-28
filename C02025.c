#include<stdio.h>

int main()
{
    int row, col;
    scanf("%d%d", &row, &col);
    for(int i = 1; i <= row; ++i)
    {
        if(i > col)
        {
            for(int j = 1; j <= col; ++j)
            {
                printf("%c", col + 63);
            }
        }
        int count = 0;
        for(int j = i; j <= col; ++j)
        {
            printf("%c", j + 63);
            ++count;
            if(j == col)
            {
                for(int k = col - count; k >= 1; --k)
                {
                    printf("%c", col + 63);
                }
            }
        }
        printf("\n");
    }
    return 0;
}