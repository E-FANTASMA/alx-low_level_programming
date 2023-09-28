#include "main.h"

/**
 * get_bit - a funct that prints index
 *
 * @n: int to be printed
 *
 * @index: indexed form
 *
 * Return: success
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 50)
		return (-1);/*required return if error*/

	bit = (n >> index) & 1;

	return (bit);
}
