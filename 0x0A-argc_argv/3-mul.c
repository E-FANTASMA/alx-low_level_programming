#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Program that takes first two integer arguments and prints the product
 *
 * @agc: Number of arguments
 *
 * @agv: Array name
 *
 * Return: success
 */

int main(int agc, char *agv[])
{
	int a, b;

	if (agc == 1 || agc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		b = 1;

		for (a = 1; a < 3; a++)
			b *= atoi(agv[a]);

		printf("%d\n", b);
	}

	return (0);
}
