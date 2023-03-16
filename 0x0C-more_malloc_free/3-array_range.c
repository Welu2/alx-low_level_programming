#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maxmimum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *boom, l = 0, r = min;

	if (min > max)
		return (0);
	boom = malloc((max-min + 1) * sizeof(int));

	if (!boom)
		return (0);
	while (l <= max - min)
		boom[l++] = r++;
	return (boom);
}
