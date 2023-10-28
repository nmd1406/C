#include<stdio.h>
#include<math.h>

int isThuanNghich(int n)
{
    int temp = n;
    int soDao = 0;
    while(temp > 0)
    {
        int chuSo = temp % 10;
        if(chuSo == 4) return 0;
        soDao = soDao * 10 + chuSo;
        temp /= 10;
    }
    if(soDao == n) return 1;
    else return 0;
}

int tongChuSo(int n)
{
    int sum = 0;
    while(n > 0)
    {
        int chuSo = n % 10;
        sum += chuSo;
        n /= 10;
    }
    if(sum % 10 == 0) return 1;
    else return 0;
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    int n;
    while(testCase--)
    {
        scanf("%d", &n);
        int start = (int)pow(10, n - 1);
        int end = (int)pow(10, n) - 1;
        for(int i = start; i <= end; ++i)
        {
            if(isThuanNghich(i) && tongChuSo(i))
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    return 0;
}