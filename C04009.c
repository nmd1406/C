#include<stdio.h>

int main()
{
    int arr[100];
    int oddArr[100];
    int evenArr[100];
    int n;
    int countOdd = 0;
    int countEven = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; ++i)
    {
        if(arr[i] % 2 == 0)
        {
            evenArr[countEven] = arr[i];
            ++countEven;
        }
        else if(arr[i] % 2 == 1)
        {
            oddArr[countOdd] = arr[i];
            ++countOdd;
        }
    }
    for(int i = 0; i < countEven; ++i)
    {
        printf("%d ", evenArr[i]);
    }
    printf("\n");
    for(int i = 0; i < countOdd; ++i)
    {
        printf("%d ", oddArr[i]);
    }
    return 0;
}