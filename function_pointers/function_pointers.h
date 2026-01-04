#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/**
 * print_name - prints a name using a function pointer
 * @name: name of the person
 * @f: pointer to function that prints the name
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - executes a function on each element of an array
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: pointer to function to compare values
 *
 * Return: index of first matching element or -1
 */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */
