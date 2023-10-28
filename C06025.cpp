#include<stdio.h>
#include<string.h>

void reverse(int* arr, int length)
{
    for(int i = 0; i < length / 2; ++i)
    {
        int temp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = arr[i];
    }
}

void subtract(char* a, char* b)
{
    int lengthA = strlen(a), lengthB = strlen(b);
    int num1[lengthA], num2[lengthA], dif[lengthA];
    
    for(int i = 0; i < lengthA; ++i)
        num1[i] = a[i] - '0';
    for(int i = 0; i < lengthB; ++i)
        num2[i] = b[i] - '0';

    reverse(num1, lengthA);
    reverse(num2, lengthB);

    for(int i = lengthB; i < lengthA; ++i)
        num2[i] = 0;

    int bienNho = 0, n = 0;
    for(int i = 0; i < lengthA; ++i)
    {
        int temp = num1[i] - num2[i] - bienNho;
        bienNho = temp % 10;
        
    }
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    while(testCase--)
    {
        char a[1001], b[1001];
        scanf("%s%s", a, b);

    }
    return 0;   
}