#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    int b = 0;
    int product = 1;
    int temp = n;
    while(temp > 0)
    {
        b = temp % 10;
        temp /= 10;
        product = 1;
        for(int i = 1; i <= b; ++i)
        {
            product *= i;
        }
        sum += product;
    }
    if(sum == n) printf("1");
    else printf("0");
    return 0;
}