#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    int n;
    int arr[100];
    while(testCase--)
    {
        int maxPosition = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; ++i)
        {
            scanf("%d", &arr[i]);
        }
        int max = arr[0];
        for(int i = 0; i < n; ++i)
        {
            if(arr[i] > max)
            {
                max = arr[i];
            }
        }
        printf("%d\n", max);
        for(int i = 0; i < n; ++i)
        {
            if(arr[i] == max)
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    return 0;
}