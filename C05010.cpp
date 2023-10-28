#include<stdio.h>
#include<math.h>

int soNguyenTo(int num)
{
    if(num == 2) return 1;
    for(int i = 2; i <= sqrt(num); ++i)
        if(num % i == 0) return 0;
    return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
            scanf("%d", &arr[i][j]);
    }
    int sum = 0;
    for(int i = 0; i < n; ++i)
    {
        for(int j = i; j < n; ++j)
        {
            if(soNguyenTo(arr[i][j]) && arr[i][j] != 1) sum += arr[i][j];
        }
    }
    printf("%d", sum);
    return 0;
}