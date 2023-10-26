
#include "main.h"

/**
 * checkr - checks for the square root
 * @x: int
 * @y: int
 * Return: int
 */
int checkr(int x, int y)
{
	if (x * x == y)
	return (x);

	if (x * x > y)
	return (-1);

	return (check(x + 1, y));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	return (0);

	return (check(1, n));
}
