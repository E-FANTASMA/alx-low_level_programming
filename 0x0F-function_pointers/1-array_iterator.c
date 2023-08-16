#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as a parameter
 *
 * @array: array to be worked with
 *
 * @size: size array
 *
 * @action:  pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)/* "--" decrease the original value by 1*/
	{
		action(*array);
		array++;/* "++" increases the original value by 1*/
	}
}
