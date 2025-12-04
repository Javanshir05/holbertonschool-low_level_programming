#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer to compute absolute value for
 *
 * Return: absolute value of n
 */
int print_last_digit(int n)
{
	if (last_digit < 0)
    {
        last_digit = - last_digit
    }
    int last_digit = n % 10;
    
    printf("%d", last_digit);

	return (last_digit);
}
