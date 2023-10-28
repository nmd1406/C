#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    int a[100];
    while(testCase--)
    {
        int b[50000] = {0};
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
            b[a[i]]++;
        }
        int count = 0;
        for(int i = 0; i < n; ++i)
            if(b[a[i]] > count) count = b[a[i]];
        for(int i = 0; i < n; ++i)
        {
            if(b[a[i]] == count)
            {
                b[a[i]] = -1;
                printf("%d ", a[i]);
            } 
        }
        printf("\n");
    }
    return 0; 
}