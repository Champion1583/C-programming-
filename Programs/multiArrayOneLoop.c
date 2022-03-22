#include <stdio.h>
#define COL 3
#define ROW 3
int main()
{
    int a[ROW][COL] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int count = 1;
    for (int *p = &a[0][0]; p <= &a[ROW - 1][COL - 1]; p++, count++)
    {
        printf("%d\t", *p);
        if (count % COL == 0)
            printf("\n");
    }
    return 0;
}