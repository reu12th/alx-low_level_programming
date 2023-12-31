#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string.
 * @s: string to be printed
 * Return: the length of string
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	return (1 + _strlen_recursion(s + 1));

	return (0);
}

/**
 * p_checkr - check if s is palindrome.
 * @s: string base address.
 * @x: beginning.
 * @y: ending.
 * Return: 1 if s is palindrome, 0 otherwise.
 */

int p_checkr(char *s, int x, int y)
{
	if (s[x] == s[y])

	if (x > y / 2)
	return (1);

	else
	return (p_checkr(s, x + 1, y - 1));

	else
	return (0);
}

/**
 * is_palindrome - check if s is palindrome
 * @s: base address for string.
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_palindrome(char *s)
{
	return (p_checkr(s, 0, _strlen_recursion(s) - 1));
}
