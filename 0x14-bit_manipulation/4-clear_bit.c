#include "main.h"

/**
 * clear_bit - sets the value
 *
 * @n: pointer
 *
 * @index: index of bit
 *
 * Return: success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int val;

	if (index > 63)
	{
		return (-1);
	}

	val = 1 << index;

	if (*n & val)
		*n ^= val;/* *n pointer*/

	return (1);
}
