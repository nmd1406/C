#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[100];
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    int max1 = arr[0];
    for(int i = 0; i < n; ++i)
    {
        if(arr[i] > max1) max1 = arr[i];
    }
    int max2 = 0;
    for(int i = 0; i < n; ++i)
    {
        if(arr[i] > max2 && arr[i] < max1) max2 = arr[i];
    }
    printf("%d %d", max1, max2);
    return 0;
}