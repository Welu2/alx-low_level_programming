#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: count argument
 * @argv: argument
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int f = 0;

	if (argc > 0)
	{
		while (f < argc)
		{
			printf("%s\n", argv[f]);
			f++;
		}
	}
	return (0);
}
