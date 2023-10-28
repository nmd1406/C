#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], twoDWord[100][100];
    gets(str);
    char* token = strtok(str, " ");
    int count;
    while(token != NULL)
    {
        strcpy(twoDWord[count], token);
        ++count;
        token = strtok(NULL, " ");
    }
    int flag[count];
    for(int i = 0; i < count; ++i)
        flag[i] = 1;
    for(int i = 0; i < count - 1; ++i)
    {
        for(int j = i + 1; j < count; ++j)
        {
            if(strcmp(twoDWord[i], twoDWord[j]) == 0)
                flag[j] = 0;
        }
    }
    for(int i = 0; i < count; ++i)
    {
        if(flag[i]) printf("%s ", twoDWord[i]);
    }
    return 0;
}