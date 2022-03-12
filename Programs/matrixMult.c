
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10][10], b[10][10], mul[10][10], r = 3, c = 3, i, j, k;
    printf("enter the number of row=");
    scanf("%d", &r);
    printf("enter the number of column=");
    scanf("%d", &c);
    printf("enter the first matrix element=\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the second matrix element=\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("multiply of the matrix=\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < c; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// #include <stdio.h>
// int main () {
//     int a[2][2] = {{1,2} , {3,4}};
//     int b[2][2] = {{4,5}, {6,7}};
//     int ans[2][2];
//     for(int i = 0; i < 2 ; i++) {
//         for(int j =0;j < 2; i++){
//             ans[i][i] = a[i];
//         }
//     }
//     return 0;
// }
// /**
//  * [0][0]*[0][0]+[0][0]*[1][0];
//  * [0][0]*[0][1]+[0][0]*[1][1];
//  *
//  * [1][1]*[]
//  *  1 2   4 5
//  *  3 4   6 7
//  *
//  *
//  */