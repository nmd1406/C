#include<stdio.h>
#include<math.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    while(testCase--)
    {
        long long n;
        scanf("%lld", &n);
        long long maxPrime;
        while(n % 2 == 0)
        {
            maxPrime = 2;
            n /= 2;
        }
        for(int i = 3; i <= sqrt(n); i += 2)
        {
            while(n % i == 0)
            {
                maxPrime = i;
                n /= i;
            }
        }
        if(n > 1) maxPrime = n;
        printf("%lld\n", maxPrime);
    }
    return 0;
}