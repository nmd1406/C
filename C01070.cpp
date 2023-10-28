#include<stdio.h>
#include<math.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x1, y1, x2, y2, x3, y3;
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    if(x1 > y1) swap(&x1, &y1);
    if(x2 > y2) swap(&x2, &y2);
    if(x3 > y3) swap(&x3, &y3);
    int max = y1;
    if(max < y2) max = y2;
    if(max < y3) max = y3;
    
    return 0;
}