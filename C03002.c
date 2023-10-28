#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isPrimeNumber(int n)
{
    int count = 0;
    for(int i = 2; i <= sqrt(n); ++i)
    {
        if(n % i == 0)
        {
            ++count;
            break;
        }
    }
    if(count == 0) return true;
    else return false;
}

int main()
{
    int n;
    scanf("%d", &n);
    if(n >= 2) printf("%d\n", 2);
    for(int i = 3; i < n; ++i)
    {
        if(isPrimeNumber(i)) printf("%d\n", i);
    }
    return 0;
}