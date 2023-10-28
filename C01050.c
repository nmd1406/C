#include<stdio.h>

int main()
{
    int col;
    int row;
    scanf("%d%d", &col, &row);
    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < col; ++j)
        {
            if(j == (col - 1) || j == 0 || i == (row - 1)) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}