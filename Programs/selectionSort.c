#include <stdio.h>
void selectionSort(int *arr, int num)
{

    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("=========SORTED ARRAY=========\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d\t",arr[i]);
    }
}
int main()
{
    int num, *result;
    printf("Enter the length for Array - ");
    scanf("%d", &num);
    int array[num];
    printf("Enter the elements for the array to sort! \n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("=========UNSORTED ARRAY=========\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    selectionSort(array, num);
    return 0;
}