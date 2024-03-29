#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: string to be printed in reverse
 */

void print_rev(char *s)
{
	int x, y, len;

	x = 0;

	while (s[x] > '\0')
	{
		x++;
	}

	len = x;

	for (y = len - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}

	_putchar('\n');
}

