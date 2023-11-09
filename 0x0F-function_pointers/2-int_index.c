#include "function_pointers.h"

/**
  * int_index -  a function that searches for an integer.
  * @array: array
  * @size: number of elements in the array
  * @cmp: pointer to the function to compare values
  *
  * Return: -1 if no matches & size <= 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}

	return (-1);
}
