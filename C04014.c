#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int b[100] = {0};
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
        int temp = arr[i];
        b[temp]++;
    }
    for(int i = 0; i < n; ++i)
    {
        if(b[arr[i]])
        {
            printf("%d %d\n", arr[i], b[arr[i]]);
            b[arr[i]] = 0;
        }
    }
    return 0;
}