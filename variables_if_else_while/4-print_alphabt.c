#include <stdio.h>

/**
 * main - prints the alphabet in lowercase then uppercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
    {
        while (c == 'q' || c== 'e')
            continue;
        putchar(c);
    }
    
    putchar('\n');

	return (0);
}