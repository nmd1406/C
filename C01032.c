#include<stdio.h>

int thuaSoNguyenTo(int n)
{
    int tich = 1;
    for(int i = 2; i <= n; ++i)
    {
        int count = 0;
        while(n % i == 0)
        {
            ++count;
            n /= i;
        }
        if(count)
        {
            if(count > 1) tich *= i;
            else tich *= i;
        }
    }
    return tich;
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    while(testCase--)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", thuaSoNguyenTo(n));
    }
    return 0;
}