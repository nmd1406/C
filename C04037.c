#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[100];
    int b[100] = {0};
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
        int temp = arr[i];
        b[temp]++;
    }
    int count = 0;
    for(int i = 0; i < 100; ++i)
    {
        if(b[i] > 1) count++;
    }
    printf("%d\n", count);
    for(int i = 0; i < n; ++i)
    {
        if(b[arr[i]] > 1)
        {
            printf("%d ", arr[i]);
            b[arr[i]] = 0;
        }
    }
    return 0;
}