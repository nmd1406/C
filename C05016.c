#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int i;
    int numberElement = 1;
    int startingRow = 0;
    int startingColumm = 0;
    int endingRow = n - 1;
    int endingColumm = n - 1;
    while(startingRow <= endingRow && startingColumm <= endingColumm)
    {
        for(i = startingColumm; i <= endingColumm; ++i)
        {
            arr[startingRow][i] = numberElement;
            numberElement++;
        }
        startingRow++;

        for(i = startingRow; i <= endingRow; ++i)
        {
            arr[i][endingColumm] = numberElement;
            numberElement++;
        }
        endingColumm--;

        if(startingColumm <= endingColumm)
        {
            for(i = endingColumm; i >= startingColumm; --i)
            {
                arr[endingRow][i] = numberElement;
                numberElement++;
            }
            endingRow--;
        }
        if(startingRow <= endingRow)
        {
            for(i = endingRow; i >= startingRow; --i)
            {
                arr[i][startingColumm] = numberElement;
                numberElement++;
            }
            startingColumm++;
        }
    }
    for(i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}