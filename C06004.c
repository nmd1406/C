#include<stdio.h>
#include<string.h>

int demChuCai(char* str, int length)
{
    int countChar = 0;
    for(int i = 0; i < length; ++i)
    {
        if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) ++countChar;
    }
    return countChar;
}

int demChuSo(char* str, int length)
{
    int countNumber = 0;
    for(int i = 0; i < length; ++i)
    {
        if(str[i] >= 48 && str[i] <= 57) ++countNumber;
    }
    return countNumber;
}

int main()
{
    char str[100];
    gets(str);
    int length = strlen(str);
    int countNumber = demChuSo(str, length);
    int countChar = demChuCai(str, length);
    int countOther = length - countChar - countNumber;
    printf("%d %d %d", countChar, countNumber, countOther);
    return 0;
}