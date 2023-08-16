#include "function_pointers.h"

/**
 * print_name - a funct that prints a name
 *
 * @name: name to print
 *
 * @f: pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)/* '==' is not the same as '=' */
		return;

	f(name);/*no return value or statement is required*/
}
