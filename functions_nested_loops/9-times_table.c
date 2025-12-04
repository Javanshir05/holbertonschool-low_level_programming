#include "main.h"

/**
 * times_table - prints the 9 times table, starting from 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, prod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;
            _putchar(prod + '0');
		}
		_putchar('\n');
	}
}
