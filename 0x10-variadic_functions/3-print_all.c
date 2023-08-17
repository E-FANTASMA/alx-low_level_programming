#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 *
 * @format: list of arg types
 *
 * Return: success
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	int a = 0, i = 0;/*int i which is equated to 0 is to represent index*/
	char *sep = ", ";/*sep is the shorter way to write separation*/
	char *s;/* s is a string*/

	va_start(valist, format);

	while (format && format[i])
		i++;/*increament by +1*/

	while (format && format[a])
	{
		if (a  == (i - 1))
		{
			sep = "";
		}
		switch (format[a])
		{
		case 'c':/* c represents char*/
			printf("%c%s", va_arg(valist, int), sep);
			/*%c is for char and %s is for string*/
			break;
		case 'i':/* i represents integer*/
			printf("%d%s", va_arg(valist, int), sep);
			/*%d is for int and %s is for string*/
			break;
		case 'f':/* f represents a float*/
			printf("%f%s", va_arg(valist, double), sep);
			break;
		case 's':/* s represents a sting*/
			s = va_arg(valist, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", s, sep);
			break;
		}
		a++;
	}
	printf("\n");/*'\n' is to print a new line*/
	va_end(valist);
}
