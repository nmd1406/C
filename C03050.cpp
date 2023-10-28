#include<stdio.h>

int check(int xA, int xB, int xC, int yA, int yB, int yC)
{
    if( (xA - xB) * (yB - yC) == (xB - xC) * (yA - yB) ) return 1;
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    int x[100000], y[100000];
    for(int i = 0; i < n - 1; ++i)
        scanf("%d %d", &x[i], &y[i]);
    int flag = 1;
    for(int i = 0; i < n - 3; ++i)
    {
        if( !check(x[i], x[i + 1], x[i + 2], y[i], y[i + 1], y[i + 2]) )
        {
            flag = 0;
            break;
        }
    }
    if(flag) printf("Yes");
    else printf("No");
    return 0;
}