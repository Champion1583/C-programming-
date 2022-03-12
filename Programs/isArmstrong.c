#include <stdio.h>
#include <math.h>
int countDigits(int a)
{
    int m,numberOfDigits=1;
    while (a / 10 != 0)
    {
        a = a / 10;
        numberOfDigits++;
    }
    return numberOfDigits;    
}
int isArmstrong(int a)
{
    int m, realNum = a,num = countDigits(a);
    double sum = 0;
    while (a > 0)
    {
        m = a % 10;
        sum += pow(m, num);
        a = a / 10;
    }
    if (sum == realNum)
        printf("%d is an Armstrong number.", realNum);
    else
        printf("%d is not an Armstrong number", realNum);
    return 0;
}
int main()
{
    int n;
    printf("Enter a number ot test: ");
    scanf("%d", &n);
    isArmstrong(n);
    return 0;
}