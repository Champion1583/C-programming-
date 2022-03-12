#include <stdio.h>
int printPrime(int a){
    int check = 0, res = 0;
    printf("====== Prime Numbers till %d ======\n" , a);
    for(int i=2;i<=a;i++){
        for(check=2;check<i;check++){
            if(i%check ==0 ){
                res = 1;
                break;
            } else res = 0;
        }
        if(res == 0) printf("%d, ", i);
    }
}

int main () {
    int n;
    printf("Enter the value of n: ");
    scanf("%d" , &n);
    printPrime(n);
    return 0;
}