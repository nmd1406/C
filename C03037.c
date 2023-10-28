#include<stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    int arr[100];
    int b[100] = {0};
    int i = 0;
    int count = 0;
    while(n > 0)
    {
        int chuSo = n % 10;
        if(chuSo == 2 || chuSo == 3 || chuSo == 5 || chuSo == 7)
        {
            arr[i] = chuSo;
            b[arr[i]]++;
            ++count;
            ++i;
        }
        n /= 10;
    }
    for(i = count - 1; i >= 0; --i)
    {
        int j;
        for(j = count - 1; j >= i; --j)
        {
            if(arr[i] == arr[j]) break;
        }
        if(i == j) printf("%d %d\n", arr[i], b[arr[i]]);
    }
    return 0;
}