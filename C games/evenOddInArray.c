#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int even[10], odd[10], c1 = 0, c2 = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[c1] = arr[i];
            c1++;
        }
        else
        {
            odd[c2] = arr[i];
            c2++;
        }
    }
    printf("Even Array: \n");
    for (int i = 0; i < c1; i++)
    {
        printf("%d\t", even[i]);
    }
    printf("\nOdd Array: \n");
    for (int i = 0; i < c2; i++)
    {
        printf("%d\t", odd[i]);
    }

    return 0;
}