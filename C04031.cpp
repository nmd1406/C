#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    int x = 1;
    while(x <= testCase)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);
        int count = 0;
        int pos = 0;
        int flag = 1;
        int anotherCount = 1;
            for(int j = 0; j < n - 1; ++j)
            {
                if(arr[j] < arr[j + 1] ) ++anotherCount;
                else if(arr[j] >= arr[j + 1]) continue;
                if(count < anotherCount) count = anotherCount;
            }
        printf("%d\n", count);
        ++x;
    }
    return 0;
}