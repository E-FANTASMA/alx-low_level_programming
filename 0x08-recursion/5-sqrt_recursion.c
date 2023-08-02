#include "main.h"

/**
 * _sqrt2 - finds the square root of a value
 *
 * @i: an integer
 *
 * @j: number that iterates from 1 to n
 *
 * Return: success
 */

int _sqrt2(int i, int j)
{
	if (j * j == i)
		return (j);
	else if (j * j > i)
		return (-1);
	return (_sqrt2(i, j + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of n
 *
 * @n: integer
 *
 * Return: On success 1.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt2(n, 1));
}
