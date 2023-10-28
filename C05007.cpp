#include<stdio.h>

int main()
{
    int m, n;
    scanf("%d%d", &m,&n);
    int arr[m][n];
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
            scanf("%d", &arr[i][j]);
    }
    int a, b;
    scanf("%d%d", &a, &b);
    for(int j = 0; j < m; ++j)
    {
        int temp = arr[j][a - 1];
        arr[j][a - 1] = arr[j][b - 1];
        arr[j][b - 1] = temp;
    }
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}