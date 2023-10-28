#include<stdio.h>
#include<string.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    getchar();
    while(testCase--)
    {
        char str[1000];
        scanf("%s", str);
        int countOdd = 0, countEven = 0;
        int length = strlen(str);
        int flag = 1;
        if(str[0] == '0')
            printf("INVALID\n");
        else
        {
            for(int i = 0; i < length; ++i)
            {
                if(str[i] > '9' || str[i] < '0')
                {
                    printf("INVALID\n");
                    flag = 0;
                    break;
                }
                else
                {
                    if((str[i] - '0') % 2 == 0) ++countEven;
                    else if((str[i] - '0') % 2 == 1) ++countOdd;
                }
            }
            if(flag)
            {
                if( (length % 2 == 0 && countEven > countOdd) || (length % 2 == 1 && countOdd < countEven) )
                printf("YES\n");
                else printf("NO\n");
            }
        }
    }
    
    return 0;
}