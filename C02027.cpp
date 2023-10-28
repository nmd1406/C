#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int c = 97;
    for(int i = 0; i < n; ++i)
    {
        if(i % 2 == 0)
        {
            for(int j = 0; j <= i; ++j)
                arr[i][j] = c++;
        }
        else
        {
            for(int j = i; j >= 0; --j)
                arr[i][j] = c++;
        }
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j <= i; ++j)
            printf("%c ", arr[i][j]);
        printf("\n");
    }
    return 0;
}