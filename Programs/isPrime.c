#include <stdio.h>
int isPrime(int a)
{
    int res = 0;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            res = 1;
            break;
        }
    }
    if (res == 0)
        printf("%d is prime.", a);
    else
        printf("%d is not a prime.", a);
}
int main()
{
    int num;
    printf("Enter the number to test for prime: ");
    scanf("%d", &num);
    isPrime(num);
    return 0;
}