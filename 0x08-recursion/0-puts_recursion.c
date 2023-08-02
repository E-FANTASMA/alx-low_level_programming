#include "main.h"

/**
 * _puts_recursion - prints a string followed
 * by a new line
 *
 * @s: string to be printed
 *
 * Return: Success
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')/* this is the initial is statement*/
	{
		_putchar('\n');/* putchar is a function to print*/
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
