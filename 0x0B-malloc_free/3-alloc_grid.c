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
	int **go, v, t;
	int n = width * height;

	if (n <= 0)
		return (NULL);
	go = (int **)malloc(sizeof(int *) * width);
	if (go == NULL)
		return (NULL);
	for (v = 0; v < height; v++)
	{
		go[v] = (int *)malloc(sizeof(int) * width);
		if (go[v] == NULL)
		{
			for (v--; v >= 0; v--)
				free(go[v]);
			free(go);
			return (NULL);
		}
	}

	for (v = 0; v < height; v++)
		for (t = 0; t < width; t++)
			go[v][t] = 0;

	return (go);
}
