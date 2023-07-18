#include "holberton.h"
/**
 * _isalpha - tests if a character is a letter.
 *
 * @c: character to be checked.
 *
 * Return: 1 if the character is a letter, otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
