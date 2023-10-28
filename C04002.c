#include<stdio.h>
#include<math.h>

int isPrimeNumber(int x)
{
    int count = 0;
    for(int i = 2; i <= sqrt(x); ++i)
    {
        if(x % i == 0)
        {
            ++count;
            break;
        }
    }
    if(count == 0) return 1;
    return 0;
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    int n;
    int arr[100];
    while(testCase--)
    {
        scanf("%d", &n);
        for(int i = 0; i < n; ++i)
        {
            scanf("%d", &arr[i]);
        }
        for(int i = 0; i < n; ++i)
        {
            if(arr[i] >= 2 && isPrimeNumber(arr[i])) 
                printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}