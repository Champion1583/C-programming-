#include <stdio.h>
#define YEAR 2022
#define MONTH 3
#define DAY 15
int isLeapYear(int a)
{
    if (a % 4 == 0)
        return 1;
    return 0;
}

void yearsCount(int a, int b, int c)
{
    int years = (YEAR - a) - 1;
    int res = isLeapYear(a);
    int months = (12 - b) + MONTH;
    int days = 0;
    if (months >= 12)
    {
        years++;
        months = 12 - months;
    }
    if (res)
    {
        int arr[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int temp = arr[b - 1];
        days = (temp - c) + DAY;
        if (days >= 30)
        {
            months++;
            days = days - 30;
        }
    }
    else
    {
        int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int temp = arr[b - 1];
        days = (temp - c) + DAY;
        if (days >= 30)
        {
            months++;
            days = days - 30;
        }
    }
    printf("%d/%d/%d", days, months, years);
}

int main()
{
    int d, m, y;
    printf("DOB");
    scanf("%d %d %d", &d, &m, &y);
    yearsCount(y, m, d);
    return 0;
}
