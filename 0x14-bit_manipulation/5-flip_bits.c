#include "main.h"

/**
 * flip_bits - counts number of bits
 *
 * @n: unsigned int 1
 *
 * @m: unsigned int 2
 *
 * Return: success
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index;
	int len;
	unsigned long int a;
	unsigned long int b = n ^ m;

	len = 0;

	for (index = 63; index >= 0; index--)/*-- removes 1*/
	{
		a = b >> index;
		if (a & 1)
			len++;
	}

	return (len);
}
