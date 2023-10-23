#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the initial segment of 's'
 * @accept: bytes from 'accept'
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int z = 0, x, y;

	x = 0;
	while (s[x] != '\0')
{

	if (s[x] != 32)
{

	y = 0;
	while (accept[y] != '\0')
{

	if (s[x] == accept[y])
	z++;

	y++;
}
}
	x++;

	else
	return (z);
}
	return (z);

}
