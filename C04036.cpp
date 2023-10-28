#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    while(testCase--)
    {
        int n, count = 0;
        scanf("%d", &n);
        int tien[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
        for(int i = 9; i >= 0; --i)
        {
            if(n >= tien[i])
            {
                n -= tien[i];
                ++count;
                ++i;
            }
            if(n == 0) break;
        }
        printf("%d\n", count);
    }
    return 0;
}