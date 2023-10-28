#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    long long arr[n];
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        scanf("%lld", &arr[i]);
    }
    for(int i = 0; i < n; ++i)
    {
        printf("%lld\n", arr[i] * arr[i]);
    }
    return 0;
}