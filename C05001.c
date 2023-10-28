#include<stdio.h>

int main()
{
    int arr[10][100];
    int col, row;
    scanf("%d%d", &row, &col);
    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < col; ++j)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int j = 0; j < col; ++j)
    {
        for(int i = 0; i < row; ++i)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}