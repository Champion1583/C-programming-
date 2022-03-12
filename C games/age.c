#include <stdio.h>
#define YEAR 2022
#define DAY 12
#define MONTH 3

int isLeapYear(int a)
{
    int days = 365;
    if (a % 4 == 0)
        return 1;
    return 0;
}
int recentDays(int a, int b) // month, day
{
    int totalDays = 0;
    if (isLeapYear(YEAR) == 1)
    {
        int months[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for (int i = 0; i < a - 1; i++)
        {
            totalDays += months[i];
        }
        totalDays += b;
        return totalDays;
    }
    else
    {
        int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for (int i = 0; i < a - 1; i++)
        {
            totalDays += months[i];
        }
        totalDays += b;

        return totalDays;
    }
};
int Days(int a, int b, int c)
{ // year, month parameter , days parameter
    int totalDays = 0, daysLeft;
    if (isLeapYear(a) == 1)
    {
        int months[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for (int i = 0; i < b - 1; i++)
        {
            totalDays += months[i];
        }
        totalDays += c;
        daysLeft = 366 - totalDays;
        return daysLeft;
    }
    else
    {
        int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for (int i = 0; i < b - 1; i++)
        {
            totalDays += months[i];
        }
        totalDays += c;
        daysLeft = 365 - totalDays;
        return daysLeft;
    }
};
int yearDays(int a)
{
    int days = 0;
    for (int i = a + 1; i < YEAR; i++)
    {
        if (i % 4 == 0)
        {
            days += 366;
        }
        else
        {
            days += 365;
        }
    }
    return days;
}
int main()
{
    int month, day, year;
    printf("Enter Day from DOB - ");
    scanf("%d", &day);
    printf("Enter month from DOB - ");
    scanf("%d", &month);
    printf("Enter year from DOB - ");
    scanf("%d", &year);
    int days = 0;
    days += Days(year, month, day);
    days += yearDays(year);
    days += recentDays(MONTH, DAY);
    printf("Total days since %d/%d/%d is - %d\n", day, month, year, days);
    return 0;
}