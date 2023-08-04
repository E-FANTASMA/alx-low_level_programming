#include "main.h"

/**
 * _strlen - counts the length of a string
 *
 * @s: string to be counted
 *
 * Return: Success
 */

int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] > '\0')
	{
		x++;
	}

	return (x);
}
