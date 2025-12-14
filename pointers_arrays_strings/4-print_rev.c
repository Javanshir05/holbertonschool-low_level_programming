#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 *
 * This function calculates the length of the string by iterating
 * until the null terminator ('\0') is found. Then, it iterates
 * backward from the last character (length - 1) down to index 0,
 * printing each character. Finally, it prints a newline.
 */
void print_rev(char *s)
{
    int length = 0;
    int i;

    while (s[length] != '\0')
    {
        length++;
    }

    for (i = length - 1; i >= 0; i--)
    {
        _putchar(s[i]);
    }

    _putchar('\n');
}