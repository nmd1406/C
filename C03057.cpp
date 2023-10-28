#include<stdio.h>
#include<string.h>

long long replaceFive(char* s)
{
    long long result = 0;
    for(int i = 0; i < strlen(s); ++i)
    {
        if(s[i] == '5') result = result * 10 + 6;
        else result = result * 10 + s[i] - '0';
    }
    return result;
}

long long replaceSix(char* s)
{
    long long result = 0;
    for(int i = 0; i < strlen(s); ++i)
    {
        if(s[i] == '6') result = result * 10 + 5;
        else result = result * 10 + s[i] - '0';
    }
    return result;
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    while(testCase--)
    {
        char x1[20], x2[20];
        scanf("%s %s", x1, x2);
        printf("%lld %lld\n", replaceSix(x1) + replaceSix(x2), replaceFive(x1) + replaceFive(x2));
    }
    return 0;
}