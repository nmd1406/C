#include<stdio.h>

int main()
{
    unsigned int a;
    scanf("%d", &a);
    int arr[10];
    int i = 0;
    int temp = a;
    if(a < 1000)
    {
        while(temp > 0)
        {
            arr[i] = temp % 2;
            temp /= 2;
            ++i;
        }
        for(int j = i - 1; j >= 0; --j)
        {
            printf("%d", arr[j]);
        }
    }
    if(a == 0) printf("0");
    return 0;
}