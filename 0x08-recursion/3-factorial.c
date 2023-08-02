#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: given number
 *
 * Return: success
 */

int factorial(int n)
{
	if (n < 0)/*first if statement*/
		return (-1);
	if (n == 0)/*second if statement*/
		return (1);
	return (n * factorial(n - 1));
}
