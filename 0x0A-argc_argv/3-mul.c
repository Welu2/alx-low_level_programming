#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int j, g;

	if (argc == 3)
	{
		j = atoi(argv[1]);
		g = atoi(argv[2]);
		printf("%d\n", j * g);
		return (0);
	}
	printf("Error\n");
	return (1);
}
