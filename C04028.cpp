#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n; ++i)
    {
        int temp = arr[i];
        int pos = i - 1;
        while(pos >= 0 && temp < arr[pos])
        {
            arr[pos + 1] = arr[pos];
            --pos;
        }
        arr[pos + 1] = temp;
        printf("Buoc %d:", i);
        for(int k = 0; k <= i; ++k)
            printf(" %d", arr[k]);
        printf("\n");
    }
    return 0;
}