#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int c = 65;
    for(int i = 0; i < n; ++i)
    {
        for(int j = i; j < n; ++j)
        {
            arr[j][i] = c++;
        }
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j <= i; ++j)
        {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}