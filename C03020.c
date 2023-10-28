#include<stdio.h>

int soDep(long long n)
{
    int sum = 0;
    int k = 0;
    int arr[100];
    int count = 0;
    while(n > 0)
    {
        sum = sum + n % 10;
        arr[k] = n % 10;
        if(arr[k] == 6) ++count;
        n /= 10;
        ++k;
    }
    if(sum % 10 != 8) return 0;
    else if(count == 0) return 0;
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
    long long start;
    long long end;
    scanf("%lld %lld", &start, &end);
    if(start > end)
    {
        long long temp = start;
        start = end;
        end = temp;
    }
    for(long long i = start; i <= end; ++i)
    {
        if(soDep(i)) printf("%lld ", i);
    }
    return 0;
}