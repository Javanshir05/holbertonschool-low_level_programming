#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
    char c;

    for (a = 0; a < 10; a++)
        putchar(a + '0');

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
