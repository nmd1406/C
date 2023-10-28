#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    char str[100];
    itoa(n, str, 10);
    int countChuSo = 0;
    int m = n;
    while(m > 0)
    {
        int temp = m % 10;
        m /= 10;
        ++countChuSo;
    }
    int k = n;
    for(int i = 1; i <= countChuSo; ++i)
    {
        k *= i;
        
    }
    return 0;
}