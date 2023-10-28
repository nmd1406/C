#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    while(testCase--)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        int arr[n][m];
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
                scanf("%d", &arr[i][j]);
        }

        int startingRow = 0;
        int endingRow = n - 1;
        int startingColumm = 0;
        int endingColumm = m - 1;
        while(startingColumm <= endingColumm && startingRow <= endingRow)
        {
            for(int i = startingColumm; i <= endingColumm; ++i)
                printf("%d ", arr[startingRow][i]);
            startingRow++;

            for(int i = startingRow; i <= endingRow; ++i)
                printf("%d ", arr[i][endingColumm]);
            endingColumm--;

            if(startingColumm <= endingColumm)
            {
                for(int i = endingColumm; i >= startingColumm; --i)
                    printf("%d ", arr[endingRow][i]);
                endingRow--;
            }

            if(startingRow <= endingRow)
            {
                for(int i = endingRow; i >= startingRow; --i)
                    printf("%d ", arr[i][startingColumm]);
                startingColumm++;
            }
        }
        printf("\n");
    }
    return 0;
}