#include <stdio.h>
#include <stdlib.h>
/**
 *
 * A 2D array is represented in memory as either row-major or column-major.
 * * In row-major representation,
 *  the elements of a 2D array are stored row by row, while
 * * in column-major representation,
 *  the elements are stored column by column1.
 */
int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

    printf("Row-major representation: ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
    }
    printf("\n");

    printf("Column-major representation: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", a[j][i]);
        }
    }
    printf("\n");

    return 0;
}
