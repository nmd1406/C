#include<stdio.h>
#include<string.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    getchar();
    while(testCase--)
    {
        char str[500];
        fgets(str, 499, stdin);
        int sum = 0;
        int flag = 1;
        int count = 0;
        const int length = strlen(str);
        if(str[0] != '8' || str[length - 2] != '8')
        {
            printf("NO");
        }
        else
        {
            for(int i = 0; i < length - 1; ++i)
                sum += (str[i] - '0');
            if(sum % 10 != 0) printf("NO");
            else
            {
                for(int i = 0; i < length - 1; ++i)
                {
                    if(str[i] == str[length - i - 2]) ++count;
                    else
                    {
                        printf("NO");
                        break;
                    }
                }
                if(count == length - 1) printf("YES");
            }
        }
        printf("\n");
    }
    return 0;
}