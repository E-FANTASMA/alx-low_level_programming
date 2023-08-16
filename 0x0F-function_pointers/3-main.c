#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs and prints simple operations
 *
 * @argc: no of arguments
 *
 * @argv: arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int x;
	int y;
	int z;
	int (*a)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	a = get_op_func(argv[2]);
	if (a == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	z = a(x, y);
	/*%d an integer argument in a formatted input and output statement*/
	printf("%d\n", z);
	return (0);
}
