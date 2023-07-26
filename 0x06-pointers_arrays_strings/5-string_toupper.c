#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @x: pointer
 *
 * Return: success
 */

char *string_toupper(char *x)
{
	int a;

	a = 0;
	while (x[a] > '\0')
	{
		if (x[a] >= 'a' && x[a] <= 'z')
			x[a] = x[a] - 32;
		a++;
	}
	return (x);
}
