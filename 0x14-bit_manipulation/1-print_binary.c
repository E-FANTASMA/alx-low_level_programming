#include "main.h"

/**
 * print_binary - prints the binary
 *
 * @n: the unsigned long int
 *
 * Return: success
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)/*condition based*/
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else/*condition based*/
	{
		_putchar('0');
	}
}
