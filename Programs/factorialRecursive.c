#include <stdio.h>
int getFacotrial(int a){
    if(a == 0) {
        return 1;
    } else {
        return (a*getFacotrial(a-1));
    }
}
int main () {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int fact = getFacotrial(num);
    printf("The factorial of %d is: %d", num , fact);
    return 0;
}