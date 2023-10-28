#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    int i = 1;
    while(i <= testCase)
    {
        int n;
        scanf("%d", &n);
        int arr[n][n];
        int numberElement = n * n;
        int startingColumm = 0;
        int startingRow = 0;
        int endingColumm = n - 1;
        int endingRow = n - 1;
        while(startingColumm <= endingColumm && startingRow <= endingRow)
        {
            for(int j = startingColumm; j <= endingColumm; ++j)
            {
                arr[startingRow][j] = numberElement;
                --numberElement;
            }
            ++startingRow;
            for(int j = startingRow; j <= endingRow; ++j)
            {
                arr[j][endingColumm] = numberElement;
                --numberElement;
            }
            --endingColumm;
            if(startingColumm <= endingColumm)
            {
                for(int j = endingColumm; j >= startingColumm; --j)
                {
                    arr[endingRow][j] = numberElement;
                    --numberElement;
                }
                --endingRow;
            }
            if(startingRow <= endingRow)
            {
                for(int j = endingRow; j >= startingRow; --j)
                {
                    arr[j][startingColumm] = numberElement;
                    --numberElement;
                }
                ++startingColumm;
            }
        }
        printf("Test %d:\n", i);
        for(int j = 0; j < n; ++j)
        {
            for(int k = 0; k < n; ++k)
                printf("%d ", arr[j][k]);
            printf("\n");
        }
        printf("\n");
        ++i;
    }
    return 0;
}