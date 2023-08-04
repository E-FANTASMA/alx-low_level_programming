#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: area to be copied to
 *
 * @src: area to  be copied from
 *
 * @n: number of bytes to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		*(dest + a) = *(src + a);
		a++;
	}
	return (dest);
}
