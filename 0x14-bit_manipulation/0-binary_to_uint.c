#include "main.h"

/**
 * binary_to_uint - converts
 *
 * @b: binary
 *
 * Return: success
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv;
	int size;
	int b_2;

	if (!b)
	{
		return (0);
	}

	conv = 0;

	for (size = 0; b[size] != '\0'; size++)
		;

	for (size--, b_2 = 1; size >= 0; size--, b_2 *= 2)
	{
		if (b[size] != '0' && b[size] != '1')
		{
			return (0);
		}

		if (b[size] & 1)
		{
			conv += b_2;
		}
	}

	return (conv);
}
