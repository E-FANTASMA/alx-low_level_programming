#include "main.h"

/**
 * _strchr - locates a chracter in a string
 *
 * @s: string to the searched through
 *
 * @c: character to find
 *
 * Return: success
 */

char *_strchr(char *s, char c)
{
	int wnt;

	for (wnt = 0; s[wnt] >= '\0'; wnt++)
	{
		if (s[wnt] == c)
			return (s + wnt);
	}

	return ('\0');
}
