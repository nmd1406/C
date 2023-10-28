#include<stdio.h>

int main()
{
    int year;
    int week;
    int day;
    int inputDay;
    scanf("%d", &inputDay);
    year = inputDay / 365;
    week = (inputDay - (year * 365)) / 7;
    day = (inputDay - (year * 365)) % 7;
    printf("%d %d %d", year, week, day);
    return 0;
}