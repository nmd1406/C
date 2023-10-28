#include<stdio.h>

int main()
{
    int n;
    int testCase;
    scanf("%d", &testCase);
    int b = 0;
    while(testCase--)
    {
        scanf("%d", &n);
        int countOdd = 0;
        int countEven = 0;
        while(n > 0)
        {
            b = n % 10;
            n /= 10;
            if(b % 2 == 0) ++countEven;
            else ++countOdd;
        }
        printf("%d %d\n", countOdd, countEven);
    }
    return 0;
}