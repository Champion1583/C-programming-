#include <stdio.h>
int main () {
    int array[] = {1,2,4,6,7,4,3,5,7,4,3,2};
    int *ptr = &array[5];
    printf("%p\t%d", ptr , *(ptr+5));
    return 0;
}