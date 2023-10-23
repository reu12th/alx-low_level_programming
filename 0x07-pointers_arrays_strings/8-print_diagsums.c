#include "main.h"
/**
 * print_diagsums - prints the sum of the 2 diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, p, l = 0, r = 0;

	i = 0;
	while (i < size)
{
	p = (i * size) + i;
	l += *(a + p);

	i++;
}
	j = 0;
	while (j < size)
{
	p = (j * size) + (size - 1 - j);
	r += *(a + p);

	j++;
}
	printf("%i, %i\n", l, r);
}
