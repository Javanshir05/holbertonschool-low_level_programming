#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * print_name - prints a name using a function pointer
 * @name: name of the person
 * @f: pointer to function that prints the name
 */
void print_name(char *name, void (*f)(char *));

#endif 
