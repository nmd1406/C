#include<stdio.h>

int main()
{
    int row, col;
    scanf("%d%d", &row, &col);
    for(int i = row; i >= 1; --i)
    {
        if(i >= col)
        {
            for(int j = 1; j <= col; ++j)
                printf("%c", col + 64);
        }
        else
        {
            int count = 0;
            for(int j = i; j <= col; ++j)
            {
                printf("%c", j + 64);
                ++count;
                if(j == col)
                {
                    for(int k = 1 + count; k <= col; ++k)
                    {
                        printf("%c", col + 64);
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}