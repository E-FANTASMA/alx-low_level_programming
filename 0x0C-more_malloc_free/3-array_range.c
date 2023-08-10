#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 *
 * @min: smallest int to start
 *
 * @max: largest intto start
 *
 * Return: success
 */

int *array_range(int min, int max)
{
	int *ar;
	int a;
	int rng;

	if (min > max)
		return (NULL);

	rng = max - min;
	ar = malloc((rng + 1) * sizeof(int));

	if (ar == NULL)
		return (NULL);

	for (a = 0; a <= rng; a++)
		ar[a] = min++;

	return (ar);
}
