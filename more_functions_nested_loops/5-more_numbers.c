#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9 followed by a new line
 * except 2 and 4
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		    _putchar(j + '0');
	}

	_putchar('\n');
}
