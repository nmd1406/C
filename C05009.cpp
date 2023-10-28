#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
            scanf("%d", &arr[i][j]);
    }
    int j = n - 1;
    for(int i = 0; i < n; ++i)
    {
        int temp = arr[i][i];
        arr[i][i] = arr[i][j];
        arr[i][j] = temp;
        --j;
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;  
}