#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program tells if a random number is positive, negative,
 * or zero. It is compiled and run on.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n > 0)
    {
	    printf("%d is positive\n", n);
    }
    else if (n == 0)
    {
	    printf("%d is zero\n", n);
    }
    else if (n < 0)
    {
	    printf("%d is negative\n", n);
    }

    return (0);
}
