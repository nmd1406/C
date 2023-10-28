#include<stdio.h> 
int st(int n) 
{ 
    int x, tong = 0; 
    for(int i = 1 ; i < n ; i++)
    { 
        if(n % i == 0)
        { 
            tong = tong + i; 
        }
    } 
    if(n == tong)
    { 
        return 1;
    } 
    else
    { 
        return 0;
    }
}

int main()
{ 
    int a, b, i; 
    scanf("%d %d",&a,&b); 
    if (a < b)
    { 
        for(i = a; i <= b; i++){ 
            if(st(i)) 
            printf("%d ",i); 
        }
    } 
    else (a>b);
    { 
        for(i = b; i <= a; i++)
        { 
            if(st(i)) 
            printf("%d ",i);
        }
    } 
    return 0; 
}