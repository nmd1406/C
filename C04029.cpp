#include<stdio.h>
#include<stdlib.h>

int greater(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}

int check(int a[], int b[], int n)
{
    for(int i = 0; i < n; ++i)
        if(a[i] != b[i]) return 1;
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    qsort(b, n, sizeof(int), greater);
    for(int i = 0; i < n; ++i)
    {
        for(int j = 1; j < n; ++j)
        {
            if(a[j] < a[j - 1])
            {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
        printf("Buoc %d: ", i + 1);
        for(int i = 0; i < n; ++i)
            printf("%d ", a[i]);
        if(!check(a, b, n)) break;
        printf("\n");
    }
    return 0;
}