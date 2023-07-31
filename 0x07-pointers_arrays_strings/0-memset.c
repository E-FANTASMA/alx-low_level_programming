#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: memory to be filled with a constant byte
 *
 * @b: character to be copied into the file
 *
 * @n: number times char b is to be copied
 *
 * Return: Success
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
