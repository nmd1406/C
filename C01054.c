#include<stdio.h>
#include<math.h>

int prime[2000001];

void sieve()
{
    for(int i = 1; i <= 2000000; ++i)
        prime[i] = i;
    for(int i = 2; i <= sqrt(2000000); ++i)
    {
        if(prime[i])
        {
            for(int j = i * i; j <= 2000000; j += i)
            {
                if(prime[j] == j) prime[j] = i;
            }
        }
    }
}

long long thuaSoNguyenTo(long long n)
{
    long long sum = 0;
    while(n != 1)
    {
        int temp = prime[n];
        while(n % temp == 0)
        {
            sum += temp;
            n /= temp;
        }
    }
    return sum;
}

int main()
{
    sieve();
    int testCase;
    scanf("%d", &testCase);
    long long sum = 0;
    while(testCase--)
    {
        long long n;
        scanf("%lld", &n);
        sum += thuaSoNguyenTo(n);
    }
    printf("%lld", sum);
    return 0;
}