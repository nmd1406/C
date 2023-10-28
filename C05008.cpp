#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    int test = 1;
    while(test <= testCase)
    {
        int col, row;
        scanf("%d%d", &row, &col);
        int arr[row][col];
        for(int i = 0; i < row; ++i)
        {
            for(int j = 0; j < col; ++j)
                scanf("%d", &arr[i][j]);
        }
        printf("Test %d:\n", test);

        int maxSumRow = 0, maxSumCol = 0;
        int posRow, posCol;

        for(int i = 0; i < row; ++i)
        {   
            int sum = 0;
            for(int j = 0; j < col; ++j)
                sum += arr[i][j];
            if(sum > maxSumRow)
            {
                maxSumRow = sum;
                posRow = i;
            } 
        }
        for(int i = posRow; i < row; ++i)
        {
            for(int j = 0; j < col; ++j)
                arr[i][j] = arr[i + 1][j];
        }
        --row;

        for(int i = 0; i < col; ++i)
        {
            int sum = 0;
            for(int j = 0; j < row; ++j)
                sum += arr[j][i];
            if(sum > maxSumCol)
            {
                maxSumCol = sum;
                posCol = i;
            }
        }
        for(int i = 0; i < row; ++i)
        {
            for(int j = posCol; j < col; ++j)
                arr[i][j] = arr[i][j + 1];
        }
        --col;

        for(int i = 0; i < row; ++i)
        {
            for(int j = 0; j < col; ++j)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
        ++test;
    }
    return 0;
}