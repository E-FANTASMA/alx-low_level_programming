#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main -  multiplies two positive numbers
 *
 * @argc: number of arguments
 *
 * @argv: argument vector
 *
 * Return: success
 */

int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3)/* number of arguments must be 3*/
	{
		printf("Error\n");
		exit(98);
	}

	/* atoi converts a string of characters to an integer value*/
	num1 = atoi(argv[1]);
	/* should be positive*/
	if (num1 < 0)
	{
		printf("Error\n");
		exit(98);
	}

	num2 = atoi(argv[2]);/* should be positive */

	if (num2 < 0)
	{
		printf("Error\n");
		exit(98);
	}

	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
