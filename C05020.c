#include<stdio.h>

long long fibonacci[100];
void fibonacciNumber()
{
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for(int i = 2; i < 100; ++i)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
}

int main()
{
    fibonacciNumber();
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int startingColumm = 0;
    int startingRow = 0;
    int endingColumm = n - 1;
    int endingRow = n - 1;
    int count = 0;
    while(startingColumm <= endingColumm && startingRow <= endingRow)
    {
        for(int j = startingColumm; j <= endingColumm; ++j)
        {
            arr[startingRow][j] = fibonacci[count];
            ++count;
        }
        ++startingRow;
        for(int j = startingRow; j <= endingRow; ++j)
        {
            arr[j][endingColumm] = fibonacci[count];
            ++count;
        }
        --endingColumm;
        if(startingColumm <= endingColumm)
        {
            for(int j = endingColumm; j >= startingColumm; --j)
            {
                arr[endingRow][j] = fibonacci[count];
                ++count;
            }
            --endingRow;
        }
        if(startingRow <= endingRow)
        {
            for(int j = endingRow; j >= startingRow; --j)
            {
                arr[j][startingColumm] = fibonacci[count];
                ++count;
            }
            ++startingColumm;
        }
    }
    for(int j = 0; j < n; ++j)
    {
        for(int k = 0; k < n; ++k)
            printf("%d ", arr[j][k]);
        printf("\n");
    }
    return 0;
}