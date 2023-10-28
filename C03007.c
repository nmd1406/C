#include<stdio.h>
#include<math.h>

int isPrimeNumber(int n)
{
    int flag = 0;
    for(int i = 2; i <= sqrt(n); ++i)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int isThuanNghich(int n)
{
    int flag = 0;
    int temp = n;
    int soDao = 0;
    while(temp > 0)
    {
        soDao = soDao * 10 + temp % 10;
        temp /= 10;
    }
    if(soDao == n) flag = 1;
    else flag = 0;
    return flag;
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    int a, b;
    while(testCase--)
    {
        scanf("%d %d", &a, &b);
        int count = 0;
        for(int i = a; i <= b; ++i)
        {
            if(isPrimeNumber(i) && isThuanNghich(i))
            {
                printf("%d ", i);
                ++count;
            }
            if(count == 10)
            {
                printf("\n");
                count = 0;
            } 
        }
        printf("\n\n");
    }
    return 0;
}