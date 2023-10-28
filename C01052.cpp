#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    while(testCase--)
    {
        int n;
        scanf("%d", &n);
        int i = 1;
        int count = 0;
        if(n % 2 != 0) printf("0");
        else
        {
            while(i <= n / i)
            {
                if(n % i == 0)
                {
                    if(i % 2 == 0) ++count;
                    if( (n / i) % 2 == 0 ) ++count;
                    if(n / i == i && i % 2 == 0) --count;
                }
                ++i;
            }
            printf("%d", count);
        }
        printf("\n");
    }
    return 0;
}