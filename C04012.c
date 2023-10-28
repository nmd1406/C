#include<stdio.h>

int main()
{
    int n;
    int arr[100];
    int b[100] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
        int temp = arr[i];
        b[temp]++;
    }
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