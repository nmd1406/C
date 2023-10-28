#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; ++i)
    {
        int j;
        for(j = 0; j < i; ++j)
        {
            if(arr[i] == arr[j]) break;
        }
        if(i == j) printf("%d ", arr[i]);
    }
    return 0;
}