#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 * Return: the length of the string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_puts(str[i]);
		i++;
	}
}
