#include "main.h"

/**
 * _puts - prints a string
 * followed by a new line to stdout
 *
 * @str: pointer to the srting to print to stdout
 */

void _puts(char *str)
{
	int x;

	for (x = 0; str[x] > '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
