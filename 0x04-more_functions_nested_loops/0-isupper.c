#include "main.h"

/**
 * _isupper - check for uppercase letters
 *
 * @x: leter to be checked
 *
 * Return: 1 if uppercase, else 0
 */

int _isupper(int x)
{
	if (x >= 'A' && x <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
