#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything, followed by a new line
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *p;
	const char *sep;
	char *s;

	sep = "";
	p = format;
	va_start(args, format);

	while (p != NULL && *p != '\0')
	{
		switch (*p)
		{
		case 'c':
			printf("%s%c", sep, (char)va_arg(args, int));
			sep = ", ";
			break;
		case 'i':
			printf("%s%d", sep, va_arg(args, int));
			sep = ", ";
			break;
		case 'f':
			printf("%s%f", sep, va_arg(args, double));
			sep = ", ";
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", sep, s);
			sep = ", ";
			break;
		default:
			break;
		}
		p++;
	}

	printf("\n");
	va_end(args);
}
