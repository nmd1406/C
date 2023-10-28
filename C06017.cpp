#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int compare(const void* a, const void* b)
{
    char* x = (char*)a;
    char* y = (char*)b;
    return strcmp(x, y);
}

int main()
{
    char str1[100], str2[100], twoDStr1[100][100], twoDStr2[100][100], temp[100][100];
    gets(str1);
    gets(str2);
    char* token = strtok(str1, " ");
    int countStr1, countStr2, countTemp;
    while(token != NULL)
    {
        strcpy(twoDStr1[countStr1++], token);
        token = strtok(NULL, " ");
    }
    token = strtok(str2, " ");
    while(token != NULL)
    {
        strcpy(twoDStr2[countStr2++], token);
        token = strtok(NULL, " ");
    }
    qsort(twoDStr1, countStr1, sizeof(twoDStr1[0]), compare);
    for(int i = 0; i < countStr1; ++i)
    {   
        int flag = 1;
        while(strcmp(twoDStr1[i], twoDStr1[i + 1]) == 0) ++i;
        for(int j = 0; j < countStr2; ++j)
        {
            if(strcmp(twoDStr1[i], twoDStr2[j]) == 0)
            {

                flag = 0;
                break;
            }
        }
        if(flag)
            printf("%s\n", twoDStr1[i]);
    }
    return 0;
}