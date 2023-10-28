#include<stdio.h>
#include<math.h>

void isSquareNumber(int x)
{
    int i = (int)sqrt(x);
    if(i * i == x)
        printf("YES\n");
    else
        printf("NO\n");
}

int main()
{
    int n;
    int arr[n];
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; ++i)
    {
        isSquareNumber(arr[i]);
    }
    return 0;
}