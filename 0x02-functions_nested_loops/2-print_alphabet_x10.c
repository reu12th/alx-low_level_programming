#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, ollowed by a new line.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char alpha = 'a';

	while (count <= 9)
{
	while (alpha <= 'z')
{
	_putchar(alpha);
	alpha++;
}
	_putchar('\n');
	count++;
}
}
