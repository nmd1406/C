// #include<stdio.h>

// int factorial(int n)
// {
//     int tich = 1;
//     for(int i = 2; i <= n; ++i)
//     {
//         tich *= i;
//     }
//     return tich;
// }

// int isStrongNumber(int n)
// {
//     int sum = 0;
//     int temp = n;
//     int b;
//     while(n > 0)
//     {
//         // b = n % 10;
//         sum += factorial(n % 10);
//         n /= 10;
//     }
//     if(sum == temp) return 1;
//     else return 0;
// }

// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     for(int i = a; i <= b; ++i)
//     {
//         if(isStrongNumber(i)) printf("%d ", i);
//     }
//     return 0;
// }

#include <stdio.h>

int giaithua(int n)
{ 
    int i, gt=1; 
    for(i=2; i<=n; i++)
        gt*=i;
    return gt; 
} 
    
int ketqua(int n)
{ 
    int x=n, 
    sum=0; 
    while (n>0)
    { 
        sum+=giaithua(n%10); 
        n/=10; 
    } 
    if(sum==x) return 1; 
    return 0; 
} 
        
int main()
{ 
    int n, m, i;
    scanf("%d %d", &n, &m);
    for(i=n; i<=m; i++)
        if(ketqua(i)) printf("%d ", i);
    return 0;
}