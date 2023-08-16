#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two int (a + b)
 *
 * @a: first int
 *
 * @b: second int
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two int (a - b)
 *
 * @a: first int
 *
 * @b: second int
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two int (a * b)
 *
 * @a: first int
 *
 * @b: second int
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of two int (a / b)
 *
 * @a: first int
 *
 * @b: second int
 *
 * Return: ans of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of two int (a % b)
 *
 * @a: first int
 *
 * @b: second int
 *
 * Return: remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
