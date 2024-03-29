#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 *
 * @s: first string
 *
 * @accept: second string
 *
 * Return: Success
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}

		s++;
	}

	return ('\0');
}
