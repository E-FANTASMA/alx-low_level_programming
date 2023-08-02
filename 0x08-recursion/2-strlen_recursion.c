#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: the string to be counted
 *
 * return: success
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')/*initial if statement*/
	{
		return (1 + _strlen_recursion(s + 1));
	} /*this signifies the end of the if statement*/
	return (0);
}
