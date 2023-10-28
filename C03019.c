#include<stdio.h>
#include<math.h>

int soDep(long long n)
{
    int sum = 0;
    int k = 0;
    int arr[100];
    while(n > 0)
    {
        sum = sum + n % 10;
        arr[k++] = n % 10;
        n /= 10;
    }
    if(sum % 10 != 0) return 0;
    else
    {
        for(int i = 0; i < k / 2; ++i)
        {
            if(arr[i] != arr[k - i - 1]) return 0;
        }
    }
    return 1;
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    while(testCase--)
    {
        int n;
        scanf("%d", &n);
        long long start = (int)pow(10, n - 1);
        long long end = (int)pow(10, n) - 1;
        int count = 0;
        for(long long i = start; i <= end; ++i)
        {
            if(soDep(i)) ++count;
        }
        printf("%d\n", count);
    }
    return 0;
}