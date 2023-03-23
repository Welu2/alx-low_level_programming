#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * int_index - rearches for integer
 * @array: array to search in
 * @size: size of array
 * @cmp: pointer to comparing function
 *
 * Return: index of the first element for which
 * the cmp function doesn't return 0, for -1 if
 * no match is found or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array && cmp)
	{
		for (c = 0; c < size; c++)
		{
			if (cmp(array[c]) != 0)
				return (c);
		}
	}

	return (-1);
}
