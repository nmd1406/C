#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for(int i = 0; i < n; ++i)
    {
        sum += arr[i];
    }
    double avg = (double)sum / n;
    printf("%.3lf", avg);
    return 0;
}