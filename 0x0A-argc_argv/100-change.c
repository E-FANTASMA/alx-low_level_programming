#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to make change for an amount.
 * of money.
 *
 * @var1: number of arguments.
 *
 * @var2: array that contains the program command line arguments.
 *
 * Return: success.
 */

int main(int var1, char *var2[])
{
	int cents, coin = 0;

	if (var1 == 1 || var1 > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(var2[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		coin += 1;
	}
	printf("%d\n", coin);
	return (0);
}
