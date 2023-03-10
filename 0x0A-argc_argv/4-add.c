#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: always 0 (success)
 */

int check_num(char *str)
{
	unsigned int k;

	k = 0;
	while (k < strlen(str))

	{
		if (!isdigit(str[k]))
		{
			return (0);
		}

		k++;
	}
	return (1);
}

/**
 * main - print the name of the program
 * @argc: count argument
 * @argv: argument
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int h;
	int u;
	int s;

	h = 1;
	while (h < argc)
	{
		if (check_num(argv[h]))

				{
				u = atoi(argv[h]);
				s += u;
				}
				else
				{
				printf("Error\n");
				return (1);
				}

				h++;
				}

				printf("%d\n", s);

				return (0);
				}
