#include <stdio.h>
int bubbleSort(int *p, int n)
{
    int passes = (n - 1);
    for (int i = passes; i > 0; i--)
    {
        for (int j = 0; j < passes; j++)
        {
            if (p[  j] > p[j + 1])
            {
                int temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n, *p;
    printf("How many elements you want in the array - ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    p = arr;
    bubbleSort(p, n);
    printf("The second highest number in array is: %d\nThe third highest number in array is: %d", p[n - 2], p[n - 3]);
    return 0;
}