#include "main.h"
/**
 * _abs - calculate the absolute value.
 *
 * @i: the int to work with.
 *
 * Return: absolute value of the int.
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
