#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 *
 * @a: array of characters
 *
 * @size: number matrix
 *
 * Return: success
 */

void print_diagsums(int *a, int size)
{
	int b;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	b = 0;
	while (b < size)
	{
		sum1 = sum1 + *(a + b * size + b);
		sum2 = sum2 + *(a + b * size + size - b - 1);

		b++;
	}

	printf("%i, %i\n", sum1, sum2);

}
