#include "main.h"

/**
 * print_number - print an int.
 *
 * @n: int to be tested
 *
 * Return: success.
 */

void print_number(int n)
{
	int a, b, c, digits, power;
	unsigned int temp, numchar, number;

	c = 0;
	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	else
	{
		temp = n;
	}

	number = temp;

	while (number >= 10)
	{
		number = number / 10;
		c++;
	}
	digits = c + 1;
	power = 1;
	a = 1;

	while (a < digits)
	{
		power = power * 10;
		a++;
	}
	b = power;
	while (b >= 1)
	{
		numchar = (temp / b) % 10;
		_putchar(numchar + '0');
		b = b / 10;
	}
}
