#include "main.h"

/**
 * checkr - check if number is prime
 * @x: int
 * @y: int
 * Return: int
 */
int checkr(int x, int y)
{
	if (y < 2 || y % x == 0)
	return (0);

	else if (x > y / 2)
	return (1);

	else
	return (checkr(x + 1, y));
}

/**
 * is_prime_number - states if number is prime
 * @n: int
 * Return: int
 */

int is_prime_number(int n)
{
	if (n == 2)
	return (1);

	return (checkr(2, n));
}
