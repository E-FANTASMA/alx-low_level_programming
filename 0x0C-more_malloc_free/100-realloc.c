#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate memory size function
 *
 * @ptr: pointer
 *
 * @old_size: old memory size
 *
 * @new_size: new memory size
 *
 * Return: success
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem;

	if (new_size > old_size)
	{
		mem = malloc(new_size);
		free(ptr);/*free() function in C is used to free or */
			   /* deallocate the dynamically allocated memory */
		return (mem);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		mem = malloc(new_size);
		free(ptr);
		return (mem);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
