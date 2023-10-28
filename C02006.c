#include<stdio.h>

int main()
{
    int col, row;
    scanf("%d%d", &row, &col);
    int n = 0;
    for(int i = 1; i <= row; ++i)
    {
        for(int j = 1; j <= col + n; ++j)
        {
            if(j <= n) printf("~");
            else if(j == col + n || i == 1 || i == row || j == n + 1) printf("*");
            else printf(".");
        }
        ++n;
        printf("\n");
    }
}