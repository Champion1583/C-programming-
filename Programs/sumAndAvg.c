#include <stdio.h>
float avg(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    int n1, n2, n3;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    printf("Enter the third number: ");
    scanf("%d", &n3);
    printf("The sum is: %d\nThe average is: %f", sum(n1,n2,n3) , avg(n1,n2,n3));
    return 0;
}