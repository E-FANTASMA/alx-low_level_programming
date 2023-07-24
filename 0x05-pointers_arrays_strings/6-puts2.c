#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line
 *
 * @str: string to print from
 */

void puts2(char *str)
{
	int len, x;

	len = 0;

	while (str[len] > '\0')
	{
		len++;
	}

	for (x = 0; x < len; x += 2)
	{
		_putchar(str[x]);
	}


	_putchar('\n');
}
