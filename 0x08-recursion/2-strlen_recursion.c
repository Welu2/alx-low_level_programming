#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to be measured
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int w = 0;

	if (*s)
	{
		w++;
		w += _strlen_recursion(s + 1);
	}
}
