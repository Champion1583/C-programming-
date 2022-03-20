#include <stdio.h>
#include <stdlib.h>
void printElements(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(p+i));
    }
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *ptr = (int *)calloc(n, sizeof(int));
    if(ptr == NULL){
        printf("Memory not available!");
        exit(1);
    }
    printf("Please enter the values to be displayed: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , ptr+i);
    }
    printElements(ptr,n);
    free(ptr);
    ptr = NULL;
    return 0;
}