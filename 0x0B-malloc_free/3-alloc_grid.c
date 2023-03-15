#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height inpt
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int j;
	int n, p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	j = malloc(sizeof(int *) * height);

	if (j == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < height; n++)
	{
		j[n] = malloc(sizeof(int) * width);

		if (j[n] == NULL)
		{
			for (n = n - 1; n >= 0; n--)
			{
				free(j[n]);
			}
			free(j);
			return (NULL);
		}
	}

	for (n = 0; n < height; n++)
	{
		for (n = 0; p < width; p++)
			j[n][p] = 0;
	}
	return (j);
}
