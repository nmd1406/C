#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[100], twoDStr[100][100];
    gets(str);
    for(int i = 0 ; i < strlen(str); ++i)
        str[i] = tolower(str[i]);
    int count = 0;
    char* token = strtok(str, " ");
    while(token != NULL)
    {
        strcpy(twoDStr[count], token);
        ++count;
        token = strtok(NULL, " ");
    }
    int flag[count];
    for(int i = 0; i < count; ++i)
        flag[i] = 1;
    for(int i = 0; i < count - 1; ++i)
    {
        int countWords = 1;
        for(int j = i + 1; j < count; ++j)
        {
            if(strcmp(twoDStr[i], twoDStr[j]) == 0 && flag[j])
            {
                flag[j] = 0;
                ++countWords;
            } 
        }
        if(flag[i])
            printf("%s %d\n", twoDStr[i], countWords);
    }
    return 0;
}