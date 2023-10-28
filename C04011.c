#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    while(testCase--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; ++i)
        {
            scanf("%d", &arr[i]);
        }
        int max = arr[0];
        int count = 1;
        for(int i = 1; i < n; ++i)
        {
            if(max < arr[i])
            {
                max = arr[i];
                ++count;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}