#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    int k = 1;
    while(k <= testCase)
    {
        int n;
        scanf("%d", &n);
        long long arr[100000];
        long long b[100000] = {0};
        for(int i = 0; i < n; ++i)
        {
            scanf("%lld", &arr[i]);
            b[arr[i]]++;
        }
        printf("Test %d:\n", k);
        for(int i = 0; i < n; ++i)
        {
            int j;
            for(j = 0; j < i; ++j)
            {
                if(arr[i] == arr[j]) break;
            }
            if(i == j) printf("%lld xuat hien %lld lan\n", arr[i], b[arr[i]]);
        }
        ++k;
    }
    return 0;
}