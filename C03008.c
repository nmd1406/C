#include<stdio.h>
#include<math.h>

// Ý tưởng: https://vi.wikipedia.org/wiki/S%E1%BB%91_ho%C3%A0n_thi%E1%BB%87n
int isPrimeNumber(int n)
{
    for(int i = 2; i <= sqrt(n); ++i)
    {
        if(n % i == 0) return 0;
    }
    return 1;
}

int perfectNumber(int i)
{
    return (int)pow(2, i - 1) * ((int)pow(2, i) - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 2; perfectNumber(i) <= n; ++i)
    {
        int temp = (int)pow(2, i) - 1;
        if(isPrimeNumber(temp)) printf("%d ", perfectNumber(i));
    }
    return 0;
}