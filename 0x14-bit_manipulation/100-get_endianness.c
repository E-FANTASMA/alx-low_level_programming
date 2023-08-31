#include "main.h"

/**
 * get_endianness - checks
 *
 * Return: success
 */

int get_endianness(void)
{
	unsigned int a;
	char *b;

	a = 1;
	b = (char *) &a;

	return (*b);
}
