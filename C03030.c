#include<stdio.h>
#include<math.h>

int check(int n)
{
    int temp = n;
    int a = temp % 10;
    temp /= 10;
    while(temp > 0)
    {
        int b = temp % 10;
        temp /= 10;
        if(b > a) return 0;
        a = b;
    }
    return 1;
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    int soChuSo;
    while(testCase--)
    {
        scanf("%d", &soChuSo);
        int start = 1;
        start = start * (int)pow(10, soChuSo - 1);
        int end = 1;
        end = end * (int)pow(10, soChuSo);
        for(int i = start; i < end; ++i)
        {
            if(check(i)) printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}