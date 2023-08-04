#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments passed into main
 *
 * @a: Number of command line arguments
 *
 * @b: Array used
 *
 * Return: succes
 */

int main(int a, char *b[])
{
	int i;

	for (i = 0; i < a; i++)
		printf("%s\n", b[i]);

	return (0);
}
