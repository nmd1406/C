#include<stdio.h>
#include<string.h>

void reverse(int* num, int length)
{
    for(int i = 0; i < length / 2; ++i)
    {
        int temp = num[i];
        num[i] = num[length - 1 - i];
        num[length - 1 - i] = temp;
    }
}

void add(char* a, char* b)
{
    int lengthA = strlen(a);
    int lengthB = strlen(b);
    int num1[lengthA], num2[lengthA], sum[lengthA + 1];

    for(int i = 0; i < lengthA; ++i)
        num1[i] = a[i] - '0';
    for(int i = 0; i < lengthB; ++i)
        num2[i] = b[i] - '0';
    
    reverse(num2, lengthB);
    reverse(num1, lengthA);
    for(int i = lengthB; i < lengthA; ++i)
        num2[i] = 0;

    int bienNho = 0, n = 0;
    for(int i = 0; i < lengthA; ++i)
    {
        int temp = num1[i] + num2[i] + bienNho;
        sum[n++] = temp % 10;
        bienNho = temp / 10;
    }
    if(bienNho) sum[n++] = bienNho;
    for(int i = n - 1; i >= 0; --i)
        printf("%d", sum[i]);
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    while(testCase--)
    {    
        char a[501], b[501];
        scanf("%s%s", a, b);
        if(strlen(a) < strlen(b)) add(b, a);
        else add(a, b);
        printf("\n");
    }
    return 0;   
}