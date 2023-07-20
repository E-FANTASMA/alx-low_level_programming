#include "main.h"

/**
 * print_line - print required lines
 *
 * @n: number of required lines
 *
 * Return: success
 */


void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
