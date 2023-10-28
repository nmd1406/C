#include<stdio.h>

struct PokeDeck 
{
    char name[100];
    int need, available, count;
};

int main()
{  
    int n;
    scanf("%d", &n);
    struct PokeDeck arr[n];
    int total = 0;
    for(int i = 0; i < n; ++i)
    {
        arr[i].count = 0;
        scanf("%s", arr[i].name);
        scanf("%d%d", &arr[i].need, &arr[i].available);
        while(arr[i].need <= arr[i].available)
        {
            arr[i].available -= arr[i].need;
            arr[i].available += 2;
            ++arr[i].count;
        }
        total += arr[i].count;
    }
    int maxCount = 0;
    for(int i = 0; i < n; ++i)
    {
        if(maxCount < arr[i].count)
            maxCount = arr[i].count;
    }

    printf("%d\n", total);
    for(int i = 0; i < n; ++i)
    {
        if(arr[i].count == maxCount)
        {
            printf("%s", arr[i].name);
            break;
        }
    }
    return 0;
}