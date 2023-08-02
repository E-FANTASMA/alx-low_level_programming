#include "main.h"

/**
 * prime - evaluate from 1 to n
 *
 * @i: an integer
 *
 * @j: number that iterates from 1 to n
 *
 * Return: success
 */
int prime(int i, int j)
{
	if (i == j)
		return (1);
	else if (i % j == 0)
		return (0);
	return (prime(i, j + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 *
 * @n: an integer
 *
 * Return: success
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
