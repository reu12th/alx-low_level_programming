#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the numbers 1 - 100 w/
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of both
 *
 * Return: always 0
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
{

	if (i % 15 == 0)

	printf("FizzBuzz");

	else if (i % 3 == 0)

	printf("Fizz");

	else if (i % 5 == 0)

	printf("Buzz");

	else

	printf("%i", i);

	if (i < 100)

	printf(" ");

	i++;
}

	printf("\n");

	return (0);
}
