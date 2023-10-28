#include<stdio.h>
#include<math.h>

long long fibonacci[100];
void isFibonacci()
{
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for(int i = 2; i < 100; ++i)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    isFibonacci();
    while(testCase--)
    {
        long long n;
        scanf("%lld", &n);
        int flag = 0;
        for(int i = 0; i < 100; ++i)
        {
            if(fibonacci[i] == n)
            {
                flag = 1;
                break;
            }
        }
        if(flag) printf("YES");
        else printf("NO");
        printf("\n");
    }
    return 0;
}