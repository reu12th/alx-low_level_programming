#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array
 * @n: integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, c;

	i = 0;
	while ((i < (n - 1) / 2))
{
	c = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = c;
	i++;
}
}
