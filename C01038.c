#include<stdio.h> 

int main() 
{ 
    int n,t,f,m=1;
    scanf("%d",&n);
    t=n/10; 
    f=t; 
    while(f>=10)
    { 
        f=f/10; m=m*10; 
    } 
    t=t%m*10+f; 
    printf("%d",t+n%10*m*10); 
    return 0; 
}