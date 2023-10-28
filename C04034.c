#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    int arr[1000];
    while(testCase--)
    {
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; ++i)
        {
            scanf("%d", &arr[i]);
        }
        int b[10000];
        int k = 0;
        for(int i = 0; i < n; ++i)
        {
            int isMax = 1;
            for(int j = i + 1; j < n; ++j)
            {
                if(arr[i] < arr[j])
                {
                    isMax = 0;
                    break;
                }
            }
            if(isMax) 
            {   
                b[k] = arr[i];
                ++k;
            }
        }
        for(int i = 0; i < k; ++i)
        {
            for(int j = i + 1; j < k; ++j)
            {
                if(b[i] < b[j])
                {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }
        for(int i = 0; i < k; ++i)
        {
            printf("%d ", b[i]);
        }
        printf("\n");
    }
    return 0;
}