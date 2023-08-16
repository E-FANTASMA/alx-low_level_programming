#include "function_pointers.h"

/**
 * int_index - a funct that searches for an integer
 *
 * @array: array of integers to be searched through
 *
 * @size: size array searched through
 *
 * @cmp: pointer to a function
 *
 * Return: success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;/* integer i which will be used through out this code*/

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)/* "++" adds 1*/
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
