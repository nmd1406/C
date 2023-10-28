#include<stdio.h>
#include<string.h>

int checkPrimeNumber(char* str, int length)
{
    for(int i = 0; i < length - 1; ++i)
    {
        if(str[i] != '2' && str[i] != '3' && str[i] != '5' && str[i] != '7') return 0;
    }
    return 1;
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    getchar();
    while(testCase--)
    {
        char str[500];
        fgets(str, 499, stdin);
        const int length = strlen(str);
        int count = 0;
        if(checkPrimeNumber(str, length) == 0) printf("NO");
        else
        {

            for(int i = 0; i < length - 1; ++i)
            {
                if(str[i] == str[length - 2 - i]) ++count;
                else
                {
                    printf("NO");
                    break;
                }
            }
            if(count == length - 1) printf("YES");
        }
        printf("\n");
    }
    return 0;
}