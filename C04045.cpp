#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    while(testCase--)
    {
        char kiTu = ' ';
        int countChan = 0, countLe = 0, count = 0;
        int number;
        while(kiTu != '\n')
        {
            scanf("%d", &number);
            ++count;
            if(number % 2 == 0) ++countChan;
            else ++countLe;
            kiTu = getchar();
        }
        if(count % 2 == 0 && countChan > countLe) printf("YES\n");
        else if(count % 2 == 1 && countChan < countLe) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}