#include <stdio.h>

/**
 * main - prints all possible combinations of two digits
 *        from 00 to 99, excluding 00
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == 0 && j == 0)
				continue;

			putchar(i + '0');
			putchar(j + '0');

			if (!(i == 9 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
