#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int h, c;
	char *laa;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	h = atoi(argv[1]);

	if (h < 0)
	{
		printf("Error\n");
		exit(2);
	}

	laa = (char *)main;

	for (c = 0; c < h; c++)
	{
		if (c == h - 1)
		{
			printf("%02hhx\n", laa[c]);
			break;
		}
		printf("%02hhx", laa[c]);
	}
	return (0);
}
