#include "main.h"

/**
* _isdigit - a function that check for a digit (0 through 9)
* @c: function parameter to be checked
* Return: 1 if true, 0 if false.
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
