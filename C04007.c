#include<stdio.h>

int main()
{
    int a[100], b[100];
    int nA, nB;
    scanf("%d%d", &nA, &nB);
    for(int i = 0; i < nA; ++i)
        scanf("%d", &a[i]);
    for(int i = 0; i < nB; ++i)
        scanf("%d", &b[i]);
    int viTriChen;
    scanf("%d", &viTriChen);
    for(int i = 0; i < nA; ++i)
    {
        if(i == viTriChen)
        {
            for(int j = 0; j < nB; ++j)
                printf("%d ", b[j]);
        }
        printf("%d ", a[i]);
    }
    return 0;
}