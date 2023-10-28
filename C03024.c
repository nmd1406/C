#include<stdio.h>

int tachChuSo(int n)
{
    int temp;
    int sum = 0;
    while(n > 0)
    {
        temp = n % 10;
        sum += temp;
        n /= 10;
    }
    return sum;
}


int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(tachChuSo(a) > tachChuSo(b))
    {
        printf("%d %d", b, a);
    }
    else if(tachChuSo(a) == tachChuSo(b)) printf("%d %d", a, b);
    else printf("%d %d", a, b);
    return 0;
}