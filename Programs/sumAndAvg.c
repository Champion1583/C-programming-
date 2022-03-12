#include <stdio.h>
int main () {
    int n1,n2,n3;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    printf("Enter the third number: ");
    scanf("%d", &n3);
    printf("The sum is: %d\n The average is: %f" , n1+n2+n3 , (n1+n2+n3)/3.0);
    return 0;
}