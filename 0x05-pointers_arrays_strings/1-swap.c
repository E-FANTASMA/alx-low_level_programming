#include "main.h"

/**
 * swap_int - switch value of the two int
 *
 * @a: pointer to the first value to be swapped
 *
 * @b: pointer to the second value to be swapped
 */

void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;
}
