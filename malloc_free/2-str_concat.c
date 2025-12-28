#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated concatenated string,
 *         or NULL if allocation fails
 */
char *str_concat(char *s1, char *s2)
{
    char *concat;
    unsigned int i, j, len1 = 0, len2 = 0;

    /* Treat NULL as empty string */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Get lengths */
    while (s1[len1] != '\0')
        len1++;
    while (s2[len2] != '\0')
        len2++;

    /* Allocate memory (+1 for null terminator) */
    concat = malloc(sizeof(char) * (len1 + len2 + 1));
    if (concat == NULL)
        return (NULL);

    /* Copy s1 */
    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    /* Copy s2 */
    for (j = 0; j < len2; j++)
        concat[i + j] = s2[j];

    /* Null terminate */
    concat[i + j] = '\0';

    return (concat);
}
