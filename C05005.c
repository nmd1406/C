#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    int i = 1;
    while(i <= testCase)
    {

        int n, m;
        scanf("%d %d", &n, &m);
        int arr[n][m];
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                scanf("%d", &arr[i][j]);
            }
        }
        printf("Test %d:\n", i);
        for(int i = 1; i < n; ++i)
        {
            for(int j = 1; j < m; ++j)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        ++i;
    }
    return 0;
}