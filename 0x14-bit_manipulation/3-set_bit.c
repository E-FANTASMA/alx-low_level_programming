#include "main.h"

/**
 * set_bit - sets a bit
 *
 * @n: pointer to the number
 *
 * @index: index
 *
 * Return: success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 50)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}
