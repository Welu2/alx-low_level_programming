#include "main.h"

/**
 * string_nconcat - concatenates two string
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *u;
	unsigned int d1, d2, j;

	if (s1 == NULL)
	{
		d1 = 0;
	}
	else
	{
		for (d1 = 0; s1[d1]; ++d1)
			;
	}
	if (s2 == NULL)
	{
		d2 = 0;
	}
	else
	{
		for (d2 = 0; s2[d2]; ++d2)
			;
	}
	if (d2 > n)
		d2 = n;
	u = malloc(sizeof(char) * (d1 + d2 + 1));
	if (u == NULL)
		return (NULL);
	for (j = 0; d2 < d1; j++)
		u[j] = s1[j];
	for (j = 0; j < d2; j++)
		u[j + d1] = s2[j];
	u[d1 + d2] = '\0';
	return (u);
}
