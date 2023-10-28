#include<stdio.h>

void arrayInput(int arr[][100], int m, int n)
{
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
            scanf("%d", &arr[i][j]);
    }
}

int main()
{
    int m, n, p, q;
    scanf("%d %d %d %d", &m, &n, &p, &q);
    int a[100][100], b[100][100], c[100][100], d[100][100];
    arrayInput(a, m, n);
    arrayInput(b, n, p);
    arrayInput(c, p, q);
    int temp[100][100];
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < p; ++j)
        {
            for(int k = 0; k < n; ++k)
            {
                temp[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < q; ++j)
        {
            for(int k = 0; k < p; ++k)
            {
                d[i][j] += temp[i][k] * c[k][j];
            }
        }
    }
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < q; ++j)
            printf("%d ", d[i][j]);
        printf("\n");
    }
    return 0;
}