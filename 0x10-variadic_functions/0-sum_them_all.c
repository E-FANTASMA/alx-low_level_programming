#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: arguments
 *
 * Return: success
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	/**
	 * the "unsigned int" data type is defined as a
	 *whole number that does not have a sign
	 */
	unsigned int i;
	int sum = 0;

	if (n == 0)
		/**
		 *== compares value of left and side expressions, return 1
		 *if they are equal other will it will return 0
		 */
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	/**
	 * += operator first adds the current value of the variable on left
	 *to the value on the right and then assigns the result
	 * to the variable on the left
	 */

	va_end(valist);

	return (sum);
}
