#include<stdio.h>
#include<stdbool.h>
#include<math.h>

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
    int i = 2;
    int count = 1;
    while(count <= n)
    {
        if(isPrimeNumber(i))
        {
            printf("%d\n", i);
            ++count;
        }
        ++i;
    }
    return 0;
}