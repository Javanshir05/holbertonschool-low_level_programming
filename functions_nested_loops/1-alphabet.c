#include <stdio.h>

/**
 * main - Prints the alphabet, in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
        putchar(c);

    putchar('\n');
}

int main(void)
{
    printf(print_alphabet);
    return 0;
}