#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n - 1; ++i)
    {
        int minPos = i;
        for(int j = i; j < n; ++j)
        {
            if(arr[j] < arr[minPos])
                minPos = j;
        }
        int temp = arr[minPos];
        arr[minPos] = arr[i];
        arr[i] = temp;
        for(int k = 0; k < n; ++k)
            printf("%d ", arr[k]);
        printf("\n");
    }
    return 0;
}