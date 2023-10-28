#include<stdio.h>

int main()
{
    unsigned int n;
    int arr[10];
    scanf("%d", &n);
    for(int i = 0; i < 10; ++i)
    {
        arr[i] = n * (i + 1);
    }
    for(int i = 0; i < 10; ++i)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}