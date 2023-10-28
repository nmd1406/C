#include<stdio.h>
#include<string.h>

void catDoi(char str[])
{
    int length = strlen(str);
    int flag = 0;
    for(int i = 0; i < length; ++i)
    {
        if(str[i] == '1') flag = 1;
        else if( !(str[i] == '8' || str[i] == '9' || str[i] == '0') )
        {
            flag = 0;
            break;
        }
    }
    if(!flag)
    {
        printf("INVALID\n");
        return ;
    }
    flag = 0;
    for(int i = 0; i < length; ++i)
    {
        if(str[i] == '1')
        {
            printf("1");
            flag = 1;
        } 
        else if(flag != 0)
        {
            printf("0");
        } 
    }
    printf("\n");
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    char str[100];
    while(testCase--)
    {
        scanf("%s", &str);
        catDoi(str);
    }
    return 0;
}