#include<stdio.h>
#include<ctype.h>
#include<string.h>

void printFirstChar(char* str)
{
    printf("%c", str[0]);
}

int main()
{
    char str[100], twoDStr[100][100];
    gets(str);
    for(int i = 0; i < strlen(str); ++i)
        str[i] = tolower(str[i]);
    char* token = strtok(str, " ");
    int count = 0;
    while(token != NULL)
    {   
        strcpy(twoDStr[count++], token);
        token = strtok(NULL, " ");
    }
    for(int i = 0; i < count - 1; ++i)
    {
        printFirstChar(twoDStr[i]);
    }
    printf("%s@ptit.edu.vn", twoDStr[count - 1]);
    return 0;
}