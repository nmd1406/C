#include<stdio.h>

int isThuanNghichLe(long long n)
{
    long long soDao;
    int flag = 0;
    long long temp = n;
    long long tongChuSo = 0;
    if(n % 2 == 0) return flag;
    else
    {
        while(temp > 0)
        {
            long long chuSo = temp % 10;
            if(chuSo % 2 == 0) return flag;

            tongChuSo += chuSo;
            soDao = soDao * 10 + chuSo;
            temp /= 10;
        }
        if((soDao == n) && (tongChuSo % 2 == 1)) flag = 1;
        else flag = 0;
    }
    return flag;
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    long long n;
    while(testCase--)
    {
        scanf("%lld", &n);
        if(isThuanNghichLe(n)) printf("YES");
        else printf("NO");
        printf("\n");
    }
    return 0;
}