#include <stdio.h>
int main () {
    int factorial=1,num;
    printf("Enter a number to get factorial of: ");
    scanf("%d", &num);
    for(int i=1;i<=num;i++){
        factorial *=i;
    }
    printf("The factorial of %d is -> %d", num, factorial);
    return 0;
}