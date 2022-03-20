#include <stdio.h>
int bubbleSort(int arr[], int elements)
{
    int passes = elements - 1;
    for (int i = passes; i > 0; i--)
    {
        for (int j = 0; j < passes; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The Bubble Sorted Array is:\n");
    for (int k = 0; k < elements; k++)
    {
        printf("%d\t", arr[k]);
    }
}
int main()
{
    int num, array[10];
    printf("Enter the value of N \n");
    scanf("%d", &num);

    printf("Enter the numbers \n");
    for (int i = 0; i < num; ++i)
        scanf("%d", &array[i]);
    bubbleSort(array, num);
    return 0;
}
