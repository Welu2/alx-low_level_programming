#include "3-calc.h"

/**
 * main - program that performs simple operations
 * @argv: number of arguments
 * @argv: array of arguments
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int d, e, f;
	char t;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	d = atoi(argv[1]);
	e = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	t = *argv[2];

	if ((t == '/' || t == '%') && e == 0)
	{
		printf("Error\n");
		exit(100);
	}

	f = func(d, e);

	printf("%d\n", f);

	return (0);
}
