#include<stdio.h>

void thuaSoNguyenTo(int n)
{
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
            if(count > 1)
            {
                printf("%d(%d) ", i, count);
            }
            else printf("%d(%d) ", i, count);
        }
    }
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    int n;
    int i = 1;
    while(testCase--)
    {
        scanf("%d", &n);
        printf("Test %d: ", i);
        thuaSoNguyenTo(n);
        printf("\n");
        ++i;
    }
    return 0;
}