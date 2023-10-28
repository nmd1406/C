#include<stdio.h>
#include<stdlib.h>

int greater(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), greater);
    int c = 0, l = 0, chan[100], le[100];
    for(int i = 0; i < n; ++i)
    {
        if(arr[i] % 2 == 0) chan[c++] = arr[i];
        else le[l++] = arr[i];
    }
    for(int i = 0; i < c; ++i)
        printf("%d ", chan[i]);
    for(int i = 0; i < l; ++i)
        printf("%d ", le[i]);
    return 0;
}