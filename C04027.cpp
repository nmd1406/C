#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    int x = 1;
    for(int i = 0; i < n - 1; ++i)
    {
        int minPosition = i;
        for(int j = i; j < n; ++j)
        {
            if(a[j] < a[minPosition]) 
                minPosition = j;
        }
        int temp = a[minPosition];
        a[minPosition] = a[i];
        a[i] = temp;
        printf("Buoc %d:", x);
        for(int i = 0; i < n; ++i)
            printf(" %d", a[i]);
        ++x;
        printf("\n");
    }
    return 0;
}