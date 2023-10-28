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
        if(arr[i] > 0)
        {
            printf("%.15f\n", (double)1 / arr[i]);
        }
    }
    return 0;
}