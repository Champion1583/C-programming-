#include <stdio.h>
void insertionSort(int *a, int n)
{
    int temp;
    for (int i = 1; i < n; i++)
    {
        temp = a[i];
        int j = i - 1;

        while (j >= 0 && temp <= a[j])
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }
    printf("=========SORTED ARRAY=========\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
int main()
{
    int num;
    printf("Enter the elements of Array - ");
    scanf("%d", &num);
    int array[num];
    printf("Enter the elements of Array: ");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("=========UNSORTED ARRAY=========\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
    insertionSort(array, num);
    return 0;
}