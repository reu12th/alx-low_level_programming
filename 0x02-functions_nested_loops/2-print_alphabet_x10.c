#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, ollowed by a new line.
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
{
	int count = 0;
	_putchar(alpha);
	alpha++;

	while (count <= 9)
{
	_putchar('\n');
	count++;
}
}
}
