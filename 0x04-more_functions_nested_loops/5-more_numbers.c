#include "main.h"

/**
 * more_numbers -  function that prints 10 times, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{

	int i = 0, n;

	while (i < 10)
{

	n = 0;

	while (n < 15)
{
	if (n > 9)
	_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');

	n++;
}

	_putchar('\n');

	i++;

}
}
