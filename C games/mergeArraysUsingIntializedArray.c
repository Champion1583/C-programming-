#include <stdio.h>
int main()
{
    int arr[10] = {[0] = 1 , [1] = 2 ,[2] = 3 ,[3] = 4 ,[4] = 5 ,}, arr2[4] = {6, 7, 8, 9};
    for (int i = 0; i < 4; i++)
    {
        arr[5 + i] = arr2[i];
    }
    printf("\n");
    for (int i = 0; i < 5 + 4; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}