#include<stdio.h>
#include<string.h>

int main()
{
    int testCase;
    scanf("%d\n", &testCase);
    while(testCase--)
    {
        char str[200];
        gets(str);
        int count = 0;
        char* token = strtok(str, " ");
        while(token != NULL)
        {
            ++count;
            token = strtok(NULL, " ");
        }
        printf("%d\n", count);
    }
    return 0;
}