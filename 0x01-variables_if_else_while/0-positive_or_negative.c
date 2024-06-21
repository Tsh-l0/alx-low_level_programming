#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* These are headers, they are similar to python imports
 * stdio.h is necessary for the printf function
 */

/* betty style doc for function main goes there */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

/* My code*/
    printf("The number %d ", n); /*print the generated number*/

    if (n >= 0) /*Criteria for positive numbers*/
    {
            printf("The number is positive\n");
    }
    else if (n == 0) /*Criteria for zero*/
    {
            printf("The number is zero\n");
    }
    else /* Criteria for negative numbers*/
    {
            printf("The number is negative\n");
    }

    return (0);
}
