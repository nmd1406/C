#include<stdio.h>
#include<math.h>

int isPrimeNumber(int n)
{
    if(n == 1) return 0;
    for(int i = 2; i < sqrt(n); ++i)
    {
        if(n % i == 0) return 0;
    }
    return 1;
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    int k = 1;
    while(k <= testCase)
    {
        int n;
        scanf("%d", &n);
        int arr[100000];
        int b[100000] = {0};
        for(int i = 0; i < n; ++i)
        {
            scanf("%d", &arr[i]);
            b[arr[i]]++;
        }
        printf("Test %d:\n", k);
        for(int i = 0; i < n; ++i)
        {
            for(int j = i + 1; j < n; ++j)
            {
                if(arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        for(int i = 0; i < n; ++i)
        {
            int j;
            for(j = 0; j < n; ++j)
            {
                if(arr[i] == arr[j]) break;
            }
            if(i == j && isPrimeNumber(arr[i])) printf("%d xuat hien %d lan\n", arr[i], b[arr[i]]);
        }
        ++k;
    }
    return 0;
}