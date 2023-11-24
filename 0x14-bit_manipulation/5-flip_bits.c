#include "main.h"
/**
 * flip_bits - n bits needed to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int j, i;

	j = 0;
	result = 1;
	differnce = n ^ m;

	i = 0;
	while (i < (sizeof(unsigned long int) * 8))
	{
		if (result == (differnce & result))
			j++;
		result <<= 1;
	i++;
	}

	return (j);
}
