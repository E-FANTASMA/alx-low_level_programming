#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers.
 *
 * @a: aray to be revered
 *
 * @n: number of elements in the array
 *
 * Return: Success
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
