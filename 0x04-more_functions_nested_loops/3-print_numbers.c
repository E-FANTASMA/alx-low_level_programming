#include "main.h"
/**
 * print_numbers - prints the numbers in the required manner
 *
 * Return: success
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}

