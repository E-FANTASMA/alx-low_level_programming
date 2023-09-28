#include "main.h"

/**
 * binary_to_uint - a function to convert a binary
 *
 * @b: char
 *
 * Return: success
 */

unsigned int binary_to_uint(const char *b)
{
	int uni;
	unsigned int base_two = 0;

	if (!b)
		return (0);

	for (uni = 0; b[uni]; uni++)
	{
		if (b[uni] < '0' || b[uni] > '1')
			return (0);
		base_two = 2 * base_two + (b[uni] - '0');
	}

	return (base_two);
}

