#include<stdio.h>
#include<math.h>

void isPrimeNumber(int x)
{
    int count = 0;
    for(int i = 2; i < sqrt(x); ++i)
    {
        if(x % i == 0)
        {
            ++count;
            break;
        }
    }
    if(count == 0) printf("YES");
    else printf("NO");
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
        isPrimeNumber(arr[i]);
        printf("\n");
    }
    return 0;
}