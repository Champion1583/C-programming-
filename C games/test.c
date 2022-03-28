#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter the number of elements in the array - ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array - \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                for (int k = j; k < n; k++)
                {
                    arr[k] = arr[k + 1];
                }
            }
        }
        printf("%d is %d times\n", i, count);
        count = 0;
    }
    return 0;
}