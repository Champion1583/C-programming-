#include <stdio.h>
int main () {
    int m,n=1,o=0,nums;
    printf("Enter the number of terms: ");
    scanf("%d" , &nums);
    m=n+o;
    printf("===== Fibonacci Series =====\nTotal terms: %d\n", nums);
    for(int i=0; i < nums; i++) {
        printf("%d, ", n);
        o=n;
        n=m;
        m=o+n;
    }
    return 0;
}