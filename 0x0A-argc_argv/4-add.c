#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - adds positive numbers.
 *
 * @gc: number of arguments.
 *
 * @gv: array to be used.
 *
 * Return: success.
 */

int main(int gc, char *gv[])
{
	int a, b, add = 0;

	for (a = 1; a < gc; a++)
	{
		for (b = 0; gv[a][b] != '\0'; b++)
		{
			if (!isdigit(gv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(gv[a]);
	}
	printf("%d\n", add);
	return (0);
}
