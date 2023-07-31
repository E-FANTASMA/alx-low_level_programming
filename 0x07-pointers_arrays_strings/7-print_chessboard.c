#include "main.h"

/**
 * print_chessboard - print the chessboard
 *
 * @a: 2d array of characters
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int c, b;

	c = 0;
	while (c < 8)
	{
		b = 0;
		while (b < 8)
		{
			_putchar (a[c][b]);
			b++;
		}
		_putchar ('\n');
		c++;
	}

}
