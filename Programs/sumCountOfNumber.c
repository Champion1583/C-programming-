#include <stdio.h>
int count(int a)
{
    int c = 1;
    while (a / 10 != 0)
    {
        a = a / 10;
        c++;
    }
    return c;
}
int sumOfDigits(int a)
{
    int sum = 0, n;
    while (a > 0)
    {
        n = a % 10;
        sum += n;
        a = a / 10;
    }
    return sum;
}
int main()
{
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);
    printf("The number of digits in %d are %d\nThe Sum of the digits is %d", n, count(n), sumOfDigits(n));
    return 0;
}