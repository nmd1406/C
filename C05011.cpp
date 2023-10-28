#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    int num = 1;
    while(num <= testCase)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        int arr[20][20];
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
                scanf("%d", &arr[i][j]);
        }
        int result[20][20] = {0};
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                for(int k = 0; k < m; ++k)
                    result[i][j] += arr[i][k] * arr[j][k];
            }
        }
        printf("Test %d:\n", num);
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j)
                printf("%d ", result[i][j]);
            printf("\n");
        }
        printf("\n");
        ++num;
    }
    return 0;
}