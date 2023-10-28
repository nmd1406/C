#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    long long n;
    while(testCase--)
    {
        scanf("%lld", &n);
        if(n % 2 == 0)
        {
            int flag = 1;
            while(n /= 10)
            {
                if((n % 10) % 2 == 1)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag) printf("YES");
            else printf("NO");
        }
        else printf("NO");
        printf("\n");
    }
    return 0;
}