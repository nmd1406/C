#include<stdio.h>

int thuanNghich(int n)
{
    int temp = n;
    int soDao = 0;
    while(temp > 0)
    {
        int chuSo = temp % 10;
        if(chuSo == 9) return 0;
        soDao = soDao * 10 + chuSo;
        temp /= 10;
    }
    if(soDao == n) return 1;
    else return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    int count = 0;
    for(int i = 2; i <= n; ++i)
    {
        if(thuanNghich(i))
        {
            printf("%d ", i);
            ++count;
        } 
    }
    printf("\n%d", count);
    return 0;
}