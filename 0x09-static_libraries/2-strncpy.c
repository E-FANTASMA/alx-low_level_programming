#include "main.h"

/**
 * _strncpy - concatenates to strings
 *
 * @dest: character 1
 *
 * @src: character 2
 *
 * @n: integer
 *
 * Return: Success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] > '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
