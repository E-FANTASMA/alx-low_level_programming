#include <stdlib.h>
#include "main.h"

/**
 * _calloc -  function that allocates memory for an array using malloc
 *
 * @nmemb: number of memory spaces
 *
 * @size: size of nmemb
 *
 * Return: success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a = 0;
	char *okay;

	if (nmemb == 0 || size == 0)
		return (NULL);

	okay = malloc(nmemb * size);
	if (okay == NULL)
		return (NULL);

	for (; a < nmemb * size; a++)
		*(okay + a) = 0;

	return (okay);
}
