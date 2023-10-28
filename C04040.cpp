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
            scanf("%d", &arr[i]);
        long long sum = 0, maxSum = -10e12;
        for(int i = 0; i < n; ++i)
        {
            sum += arr[i];
            if(sum < 0) sum = 0;
            if(sum > maxSum)
                maxSum = sum;
        }
        printf("%lld\n", maxSum);
    }
    return 0;
}