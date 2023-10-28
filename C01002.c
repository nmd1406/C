#include<stdio.h>

int main()
{
    int n;
    int arr[n];
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; ++i)
    {
        arr[i] *= 2;
        printf("%d\n", arr[i]);
    }
    return 0;
}