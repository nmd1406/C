#include<stdio.h>

int main()
{
    int n;
    int arr[100];
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for(int i = 0; i < n; ++i)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    int min2 = 99;
    for(int i = 0; i < n; ++i)
    {
        if(arr[i] > min && arr[i] < min2)
        {
            min2 = arr[i];
        }
    }
    printf("%d %d", min, min2);
    return 0;
}