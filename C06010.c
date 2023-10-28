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
        int length = strlen(str);
        int count = 0;
        for(int i = 0; i < length - 1; ++i)
        {
            if(str[i] % 2 != 0)
            {
                printf("NO");
                break;
            }
            else
            {
                if(str[i] == str[length - i - 2]) ++count;
                // else
                // {
                //     printf("NO");
                //     break;
                // }
            }
        }
        // if(count == length - 1) printf("YES");
        printf("%d %d", count, length);
        printf("\n");
    }
    return 0;
}