#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: arguments
 * Return: 0 succes
 */

int main(int argc, char **argv)
{
	int i, num, sum = 0;
	char *flag;

	if (argc < 2)
{
	printf("0\n");
	return (0);
}

	for (i = 1; argv[i]; i++)
{
	num = strtol(argv[i], &flag, 10);

	if (*flag)
{
	printf("Error\n");
	return (1);
}

	else
{
	sum += num;
}
}
	printf("%d\n", sum);

	return (0);
}
