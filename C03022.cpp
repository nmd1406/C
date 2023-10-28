#include<stdio.h>
#include<math.h>

int prime[1000001];

void sieve()
{
    for(int i = 0; i <= 1000000; ++i)
        prime[i] = 1;    
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(1000000); ++i)
    {
        if(prime[i])
        {
            for(int j = i * i; j <= 1000000; j += i)
                prime[j] = 0;
        }
    }
}

int tongChuSo(int n)
{
    int sum = 0;
    int temp = n;
    while(temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }
    if(sum % 5 == 0) return 1;
    else return 0;
}

int main()
{
    sieve();
    int n;
    scanf("%d", &n);
    int count = 0;
    for(int i = 2; i <= n; ++i)
    {
        if(prime[i] && tongChuSo(i))
        {
            printf("%d ", i);
            ++count;
        }
    }
    printf("\n%d", count);
    return 0;
}