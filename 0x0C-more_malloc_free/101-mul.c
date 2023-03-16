#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */

int main(int argc, char *argv[])
{
	unsigned long mul;
	int v, b;

	if (argv != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (v = 1; v < argc; v++)
	{
		for (b = 0; argv[v][b] != '\0'; b++)
		{
			if (argv[v][b] > 57 || argv[v][b] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
