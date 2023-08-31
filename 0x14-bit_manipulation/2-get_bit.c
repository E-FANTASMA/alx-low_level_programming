#include "main.h"

/**
 * get_bit - returns the value
 *
 * @n: unsigned long int
 *
 * @index: index
 *
 * Return: success
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int inx;

	if (n == 0 && index < 64)/*initial if statement*/
		return (0);

	for (inx = 0; inx <= 63; n >>= 1, inx++)
	{
		if (index == inx)
		{
			return (n & 1);
		}
	}

	return (-1);/*success ? yes*/
}
