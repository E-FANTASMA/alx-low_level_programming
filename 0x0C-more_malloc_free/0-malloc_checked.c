#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 *
 * @b: unsigned int
 *
 * Return: success
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(sizeof(char) * b);

	if (p == NULL)
		exit(98);

	return (p);
}
