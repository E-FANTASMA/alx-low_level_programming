#include "main.h"

/**
 * print_binary - prints binary rep of a num
 *
 * @n: unsigned long int
 *
 * Return: success
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)/*right shift means remove last number by req amount*/
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
