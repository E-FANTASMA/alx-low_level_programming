#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - entry Point
 *
 * @separator: comma space for statement
 *
 * @n: num of elements
 *
 * Return: sucess
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;/* lets see i as index*/
	char *s;/* s is a string*/

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(valist, char *);

		if (s)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
