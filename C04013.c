#include<stdio.h>

int main()
{
    int arr[100];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    int countPhanTu = 0;
    for(int i = 0; i < n; ++i)
    {
        int count = 0;
        for(int j = 0; j < n; ++j)
        {
            if(arr[i] == arr[j] && i != j)
            {
                ++count;
            } 
        }
        if(count == 0) 
        {
            ++countPhanTu;
        }
    }
    printf("%d\n", countPhanTu);
    for(int i = 0; i < n; ++i)
    {
        int count = 0;
        for(int j = 0; j < n; ++j)
        {
            if(arr[i] == arr[j] && i != j)
            {
                ++count;
            } 
        }
        if(count == 0) 
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}