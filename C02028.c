#include<stdio.h>

int main()
{
    int h;
    scanf("%d", &h);
    int c = 'A';
    int k = h - 1;
    for(int i = h; i >= 1; --i)
    {
        for(int j = i; j >= 1; --j)
        {
            printf("%c", c);
            c += 2;
        }
        c = c - 2 * k;
        k--;
        printf("\n");
    }
    return 0;   
}