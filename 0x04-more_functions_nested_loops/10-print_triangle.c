#include "main.h"

/**
 * print_triangle - entry point
 * Description: Prints diagonals
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int row, hashes, spaces;

	if (size <= 0)
{
	_putchar('\n');
}
	else
{
	row = 1;
	while  (row <= size)
{
	spaces = size - row;
	while (spaces >= 1;)
{
	_putchar(' ');
	spaces--;
}
	hashes = 1;
	while (hashes <= row)
{
	_putchar('#');
	hashes++;
}
	_putchar('\n');
	row++;
}
}
}
