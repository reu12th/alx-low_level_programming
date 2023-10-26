#include "main.h"

/**
 * factorial - function that returns the factorial of a given num.
 * @n: number
 * Return: -1 if n is lower than 0 or n!
 */

int factorial(int n)
{
	if (n < 0)
{
	return (-1);
}
	else if (n == 0)
{
	return (1);
}
	else
{
	return (n * factorial(n - 1));
}
}
