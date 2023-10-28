#include<stdio.h>
#include<string.h>

int main()
{
    char str[100001];
    gets(str);
    int length = strlen(str);
    int pos = 0;;
    for(int i = 0; i < length; ++i)
    {
        char maxChar = str[pos];
        for(int j = pos; j < length; ++j)
        {
            if(str[j] > maxChar)
            {
                maxChar = str[j];
                pos = j;
            }
        }
        for(int k = pos; k < length; ++k)
        {
            if(str[k] == maxChar)
            {
                printf("%c", str[k]);
                pos = k + 1;
            }
        }
    }
    return 0;
}