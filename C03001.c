#include<stdio.h>

void tongChuSoChiaCho10(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    if(sum % 10 == 0) printf("YES\n");
    else printf("NO\n");
}

int main()
{
    int i, n;
    scanf("%d", &i);
    while(i--)
    {
        scanf("%d", &n);
        tongChuSoChiaCho10(n);
    }
    return 0;
}