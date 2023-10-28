#include<stdio.h>
#include<math.h>

int soNguyenTo(int num)
{
    if(num <= 1) return 0;
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
    int count = 0;
    int max = 0;
    int row;
    for(int i = 0; i < n; ++i)
    {
        count = 0;
        for(int j = 0; j < n; ++j)
            if(soNguyenTo(arr[i][j])) ++count;
        if(max < count)
        {
            max = count;
            row = i;
        }
    }

    printf("%d\n", row + 1);
    for(int i = 0; i < n; ++i)
        if(soNguyenTo(arr[row][i])) printf("%d ", arr[row][i]);
    return 0;
}