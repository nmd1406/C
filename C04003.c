#include<stdio.h>

int main()
{
    int n;
    int arr[100];
    int testCase;
    scanf("%d", &testCase);
    while(testCase--)
    {
        scanf("%d", &n);
        int count = 0;
        for(int i = 0; i < n; ++i)
        {
            scanf("%d", &arr[i]);
        }
        for(int i = 0; i < n / 2; ++i)
        {
            if(arr[i] != arr[n - i - 1]) ++count;
        }
        if(count != 0) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}