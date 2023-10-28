#include<stdio.h>
#include<string.h>
#include<ctype.h>

void chuanHoaTen(char* str)
{
    str[0] = toupper(str[0]);
}

void lowerString(char* str)
{
    for(int i = 0; i < strlen(str); ++i)
        str[i] = tolower(str[i]);
}

void upperString(char* str)
{
    for(int i = 0; i < strlen(str); ++i)
        str[i] = toupper(str[i]);
}

int main()
{
    int testCase;
    char str[100], firstName[100], lastName[100][100];
    scanf("%d", &testCase);
    getchar();
    while(testCase--)
    {
        gets(str);
        lowerString(str);
        int count = 0;
        char* token = strtok(str, " ");
        strcpy(firstName, token);
        token = strtok(NULL, " ");
        while(token != NULL)
        {  
            strcpy(lastName[count], token);
            ++count;
            token = strtok(NULL, " ");
        }
        for(int i = 0; i < count; ++i)
        {
            chuanHoaTen(lastName[i]);
            if(i == count - 1)
                printf("%s,", lastName[i]);
            else printf("%s ", lastName[i]);
        }
        upperString(firstName);
        printf(" %s\n", firstName);
    }
    return 0;
}