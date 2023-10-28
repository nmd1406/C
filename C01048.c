#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int temp = n;
    int b = 0;
    int countOdd = 0;
    int countEven = 0;
    while(temp > 0)
    {
        b = temp % 10;
        temp /= 10;
        if(b % 2 == 0) ++countEven;
        else ++countOdd;
    }
    printf("%d %d", countOdd, countEven);
    return 0;
}