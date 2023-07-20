#include "main.h"

/**
 *  _isdigit - check if the value is a number
 *
 * @c : the value to be checked
 *
 * return : 1 if the value is a digit, else 0
 *
 */

int _isdigit(int c);
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
