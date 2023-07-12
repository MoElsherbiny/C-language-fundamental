#include <stdio.h>
#include <stdlib.h>

/**
 * Create 2D _ Array With 3 rows and 4 column
 */

int main()
{
    int two_D_array[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", two_D_array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
