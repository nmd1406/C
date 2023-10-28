#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    int n;
    int arr[100];
    while(testCase--)
    {
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for(int i = 0; i < n; i++)
        {
            if(arr[i] % 2 == 0) printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}