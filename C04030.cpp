#include<stdio.h>
#include<stdlib.h>

int tangDan(const void* a, const void* b)
{
    return ( *(int*)a - *(int*)b );
}

int giamDan(const void* a, const void* b)
{
    return ( *(int*)b - *(int*)a );
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    int x = 1;
    while(x <= testCase)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[n];
        for(int i = 0; i < n; ++i)
            scanf("%d", &a[i]);
        for(int i = 0; i < n; ++i)
            scanf("%d", &b[i]);
        qsort(a, n, sizeof(int), tangDan);
        qsort(b, n, sizeof(int), giamDan);
        int j = 0, k = 0;
        printf("Test %d:\n", x);
        for(int i = 0; i < n * 2; ++i)
        {
            if(i % 2 == 0) printf("%d ", a[j++]);
            else printf("%d ", b[k++]);
        }
        printf("\n");
        ++x;
    }
    return 0;
}