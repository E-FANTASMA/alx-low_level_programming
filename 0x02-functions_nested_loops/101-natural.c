#include <stdio.h>
/**
  * main - Lists all the natural numbers below 1024
  * without those that are multiples of 3 or 5.
  *
  * Return: Nothing.
  */

int main(void)
{
	int i, res;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
	printf("%d\n", res);
	return (0);
}
