#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    for(int k = 1; k <= testCase; ++k)
    {
        int a[100];
        int b[100];
        int n, m, position;
        scanf("%d %d %d", &n, &m, &position);
        for(int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }
        for(int i = 0; i < m; ++i)
        {
            scanf("%d", &b[i]);
        }
        printf("Test %d:\n", k);
        for(int i = 0 ; i < n; ++i)
        {
            if(i == position)
            {
                for(int j = 0; j < m; ++j)
                {
                    printf("%d ", b[j]);
                }
                
            }
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}