#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int m = n - 1;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= m + n; ++j)
        {
            if(j <= m) printf("~");
            else if(j == m + 1 || j == m + n || i == n || i == 1) printf("*");
            else printf(".");
        }
        printf("\n");
        --m;
    }
    return 0;
}