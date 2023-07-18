#include "main.h"
/**
 * print_sign - finds the sign of n.
 *
 * @n: the number to be checked.
 *
 *  Return: 1 if (n>1), 0 if (n = 0), -1 if (n<0), otherwise /.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
