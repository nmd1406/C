#include<stdio.h>
#include<string.h>

int isDigit(char* str)
{
    for(int i = 0; i < strlen(str) - 1; ++i)
    {
        if(str[i] < '0' || str[i] > '9') return 0;
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
        char str[1000];
        int arr[10] = {0};
        int flag = 1;
        fgets(str, 999, stdin);
        if(isDigit(str) == 0 || str[0] == '0') printf("INVALID\n");
        else
        {
            for(int i = 0; i < strlen(str) - 1; ++i)
                arr[str[i] - '0']++;
            for(int i = 0; i < 10; ++i)
            {
                if(arr[i] == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag) printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}