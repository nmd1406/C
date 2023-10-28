#include<stdio.h>

int main()
{
    float celciusDegree;
    float fahrenheitDegree;
    scanf("%f", &celciusDegree);
    fahrenheitDegree = (celciusDegree * 9 / 5) + 32;
    printf("%.2f", fahrenheitDegree);
    return 0;
}