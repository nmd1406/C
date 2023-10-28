#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    int num = 1;
    while(num <= testCase)
    {
        int n;
        scanf("%d", &n);
        int arr[20][20] = {0};
        for(int i = 0; i < n; ++i)
        {
            int temp = 1;
            for(int j = 0; j <= i; ++j)
                arr[i][j] = temp++;
        }
        int result[20][20] = {0};
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                for(int k = 0; k < n; ++k)
                    result[i][j] += arr[i][k] * arr[j][k];
            }
        }
        printf("Test %d:\n", num);
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        ++num;
    }
    return 0;
}