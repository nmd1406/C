#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    int a, b, c, d;
    while(testCase--)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(c - a == d - b) printf("YES");
        else printf("NO");
        printf("\n");
    }
    return 0;
}