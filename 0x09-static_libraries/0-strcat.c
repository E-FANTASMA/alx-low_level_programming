#include "main.h"

/**
 * *_strcat - appends the src string to the dest string
 *
 * @dest: string to be appended to
 *
 * @src: string to append
 *
 * Return: Success
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] > '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] > '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
