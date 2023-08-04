#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed into main
 *
 * @v1: Number of arguments
 *
 * @v2: Array  to be used
 *
 * Return: success
 */

int main(int v1, char *v2[])
{
	int i;

	if (v1 == 1)
		printf("%d\n", v1 - 1);
	else
	{
		for (i = 0; *v2; i++, v2++)
			;

		printf("%d\n", i - 1);
	}

	return (0);
}
