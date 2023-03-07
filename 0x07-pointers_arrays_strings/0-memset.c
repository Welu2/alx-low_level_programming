#include "main.h"

/**
 * _memset - fills the first n bytes of the memormy area
 * pointed to by @s with the constant byte @v.
 * @s: A pointer to the memory area to be filled.
 * @b: The desired value.
 * @n: The number of bytes to be changed
 * Return: A pointer to the filled memory area @s.
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
