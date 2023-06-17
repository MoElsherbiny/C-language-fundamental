#include <stdio.h>

/**p
 *  a1 =1 , d = 2 , n = 9 , an = 17 ;
 *  to calculate the sum of Arithmetic Sequence
 *
 *  Sn =(a1 + an)* n/2
 *
 */


/** Here is a pseudocode of thin sum
 * BEGIN
    DECLARE a1, an, sn AS FLOAT
    DECLARE n AS INTEGER
    OUTPUT "Enter the Initial term (a1):"
    INPUT a1
    OUTPUT "Enter the n-th Term (an):"
    INPUT an
    OUTPUT "Enter the number of elements of the Arithmetic Sequence:"
    INPUT n
    SET sn = (a1 + an) * n / 2
    OUTPUT "The sum of The Arithmetic Sequence is: " + sn
    RETURN 0
END
 * 
*/

int main()
{
    float a1, an, sn;
    int n;
    printf("Enter the Initial term (a1):  ");
    scanf("%f", &a1);
    printf("Enter the n-th Term (an): ");
    scanf("%f", &an);
    printf("Enter the number of elements of the Arithmetic Sequence: ");
    scanf("%d", &n);
    sn = (a1 + an) * n / 2;
    printf("The sum of The Arithmetic Sequence is: %.f\n", sn);
    return 0;
}