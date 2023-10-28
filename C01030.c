#include<stdio.h>
#include<math.h>

void thuaSoNguyenTo(int a)
{
    for(int i = 2; i <= a; ++i)
    {
		while(a % i == 0)
        {
            printf("%d ", i);
            a /= i;
        }
    }
    if(a != 1) printf("%d", a);    
}

int main()
{
    int a;
    int i;
    scanf("%d", &i);
    while(i--)
    {
        scanf("%d", &a);
        thuaSoNguyenTo(a);
        printf("\n");
    }
    return 0;
}