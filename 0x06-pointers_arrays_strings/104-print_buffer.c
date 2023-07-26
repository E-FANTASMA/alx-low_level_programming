#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print a  buffer
 *
 * @b: the  buffer to be printed
 *
 * @size: the size of the buffer to be printed
 *
 * Return: success
 */

void print_buffer(char *b, int size)
{
	int a, x, y;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		x = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (y = 0; y < 10; y++)
		{
			if (y < x)
				printf("%02x", *(b + a + y));
			else
				printf("  ");
			if (y % 2)
			{
				printf(" ");
			}
		}
		for (y = 0; y < x; y++)
		{
			int z = *(b + a + y);

			if (z < 32 || z > 132)
			{
				z = '.';
			}
			printf("%c", z);
		}
		printf("\n");
		a += 10;
	}
}
