#include<stdio.h>
#include<math.h>

int factorial(int n)
{
    int tich = 1;
    for(int i = 1; i <= n; ++i)
    {
        tich *= i;
    }
    return tich;
}

int main()
{
    int n;
    int k;
    scanf("%d %d", &n, &k);
    if(factorial(n) % (int)pow(2, k) == 0) printf("Yes");
    else printf("No");
    return 0;
}