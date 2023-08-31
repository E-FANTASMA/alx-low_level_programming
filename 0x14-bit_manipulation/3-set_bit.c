#include "main.h"

/**
 * set_bit - sets a bit
 *
 * @n: pointer
 *
 * @index: index of bit
 *
 * Return: success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)/* > 63 "greater than 63"*/
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);/*dont mixup UL and ....*/
	return (1);
}
