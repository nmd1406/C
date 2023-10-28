#include<stdio.h>
#include<string.h>

int bienSoTangChat(char* str)
{
    if(str[6] < str[7] && str[7] < str[8] && str[8] < str[10] && str[10] < str[11]) return 1;
    return 0;
}

int bienSoBangNhau(char* str)
{
    if(str[6] != str[7]) return 0;
    if(str[7] != str[8]) return 0;
    if(str[8] != str[10]) return 0;
    if(str[10] != str[11]) return 0;
    return 1;
}

int bienSoDacBiet(char* str)
{
    int flag1 = 0, flag2 = 0;
    if(str[6] == str[7] && str[7] == str[8]) flag1 = 1;
    if(str[10] == str[11]) flag2 = 1;
    if(flag1 && flag2) return 1;
    return 0;
}

int bienSoLocPhat(char* str)
{
    if( (str[6] == '6' || str[6] == '8') && (str[7] == '6' || str[7] == '8') && (str[8] == '6' || str[8] == '8') && (str[10] == '6' || str[10] == '8') && (str[11] == '6' || str[11] == '8') ) return 1;
    return 0;
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    getchar();
    while(testCase--)
    {
        char str[20];
        fgets(str, sizeof(str), stdin);
        if(bienSoBangNhau(str) || bienSoDacBiet(str) || bienSoLocPhat(str) || bienSoTangChat(str)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}