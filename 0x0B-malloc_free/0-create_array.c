#include "main.h"

/**
 * create_array - a function that creates an array of chars, and initializes it with a specific char
 *
 * @size: size of array
 *
 * @c: character
 *
 * Return: success
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int a;

	ar = malloc(sizeof(char) * size);

	if (size == 0 || ar == NULL)
		return (NULL);

	for (a = 0, a < size, a++)
		ar[a] = c;
	return (ar);
}
