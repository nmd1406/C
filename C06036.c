#include<stdio.h>
#include<string.h>

int main()
{
    char str[100001];
    fgets(str, 100000, stdin);
    printf("%d", strlen(str) - 2);
    return 0;
}