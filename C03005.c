#include<stdio.h>

int gcd(int a, int b)
{
    if (a == 0 || b == 0)
        return a + b;
    return gcd(b % a, a);
}

// void soNguyenToCungNhau(int a, int b)
// {
//     if(a != b && ucln(a, b) == 1)
//     {
//         printf("(%d, %d)\n", a, b);
//     }
// }

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    for(int i = a; i <= b; ++i)
    {
        for(int j = a; j <= b; ++j)
        {
            if(gcd(i, j) == 1 && i != j && i < j)
            {
                printf("(%d,%d)\n", i, j);
            }
        }
    }
    return 0;
}