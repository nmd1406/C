#include<stdio.h>
#include<string.h>
#include<ctype.h>

void chuanHoa(char* str)
{
    str[0] = toupper(str[0]);
}

int main()
{
    char str[100], twoDStr[100][100];
    int testCase;
    scanf("%d", &testCase);
    getchar();
    while(testCase--)
    {
        gets(str);
        for(int i = 0; i < strlen(str); ++i)
            str[i] = tolower(str[i]);
        char* token = strtok(str, " ");
        int count = 0;
        while(token != NULL)
        {
            strcpy(twoDStr[count], token);
            ++count;
            token = strtok(NULL, " ");
        }
        for(int i = 0; i < count; ++i)
        {
            chuanHoa(twoDStr[i]);
            printf("%s ", twoDStr[i]);
        }
        printf("\n");
    }
    return 0;
}