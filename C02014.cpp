#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[20][20];
    int temp = n;
    int startRow = 0, startCol = 0, endRow = 2 * n - 2, endCol = 2 * n - 2;
    while(startRow <= endRow && startCol <= endCol)
    {
        for(int i = startCol; i <= endCol; ++i)
        {
            arr[startRow][i] = temp;
            arr[endRow][i] = temp;
        }
        ++startRow;
        --endRow;

        for(int i = startRow; i <= endRow; ++i)
        {
            arr[i][startCol] = temp;
            arr[i][endCol] = temp;
        }
        ++startCol;
        --endCol;

        --temp;
    }
    for(int i = 0; i < 2 * n - 1; ++i)
    {
        for(int j = 0; j < 2 * n - 1; ++j)
            printf("%d", arr[i][j]);
        printf("\n");
    }
    return 0;
}