#include "main.h"

/**
 * get_endianness - checks if little or big endian
 *
 * Return: success
 */

int get_endianness(void)
{
	unsigned int i = 1;

	char *c = (char *) &i;

	return (*c);
}
