#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 *
 * @separator: string to be printed
 *
 * @n: number of integers
 *
 * @...: variable number of numbers to be printed
 *
 * Return: success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);/*recall n is the number of integers*/

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && i < n - 1)
			/*if separator and unsigned int i are less than ...*/
			printf("%s", separator);
	}

	printf("\n");
	/*\n means new line*/
	va_end(valist);
	/*void prototype doesn't need a return value*/
}
