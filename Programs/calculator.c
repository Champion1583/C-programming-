#include <stdio.h>
int sum(int a, int b){
    return a+b;
}
int subtract(int a, int b){
    return a-b;
}
int multiply(int a, int b){
    return a*b;
}
int division(int a, int b){
    return a/b;
}
int main () {
    int n1,n2,operator;
    printf("Enter a number: ");
    scanf("%d", &n1);
    printf("Enter another number: ");
    scanf("%d", &n2);
    printf("What do you want to do for the numbers?\n1 - Add\n2 - Subtract\n3 - Multiply\n4 - Divide\n: ");
    scanf("%d", &operator);
    switch (operator)
    {
    case 1:
        printf("The sum is : %d" , sum(n1,n2));
        break;
    case 2:
        printf("The subtraction is : %d" , subtract(n1,n2));
        break;
    case 3:
        printf("The multiplication is : %d" , multiply(n1,n2));
        break;
    case 4:
        printf("The division is : %d" , division(n1,n2));
        break;
    default:
        printf("Wrong selection! Please try again.");
        break;
    }
    return 0;
}