#include <stdio.h>
int linearSearch(int *a, int n, int val)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == val)
            return i;
    }
    return 0;
}
int main()
{
    int num, res, val;
    printf("Enter the number of elements in Array: ");
    scanf("%d", &num);
    int array[num];
    printf("Enter the elements of Array: ");
    for (int i = 0; i < num; i++)
        scanf("%d", &array[i]);
    printf("Enter the integer you want to check for: ");
    scanf("%d", &val);
    printf("======== Array Entered =========\n");
    for (int i = 0; i < num; i++)
        printf("%d\t", array[i]);
    printf("\n");
    res = linearSearch(array, num, val);
    if (!res)
        printf("%d is not in the Array!", val);
    else
        printf("%d is present in the Array at %d position", val, res+1);
    return 0;
}