#include<stdio.h>

int main()
{
    int h;
    scanf("%d", &h);
    
    int k = h;
    int c = 'D';
    for(int i = 1; i <= h; ++i)
    {
        for(int j = i; j <= h; ++j)
        {
            printf("%c", c);
            if(j != h) ++c;
        }
        c -= k;
        --k;
        if(i != h) printf("\n");
    }
    return 0;
}