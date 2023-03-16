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
	unsigned int d1 = 0, d2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	while (s1[d1] != '\0')
	{
		d1++;
	}
	while (s2[d2] != '\0')
	{
		d2++;
	}

	if (n > d2)
		n = d2;
	u = malloc((d1 + n + 1) * sizeof(char));

	if (u == NULL)
		return (0);

	for (i = 0; i < d1; i++)
	{
		u[i] = s1[i];
	}
	for (; i < (d1 + n); i++)
	{
		u[i] = d2[i - d1];
	}
	u[i] = '\0';

	return (u);
}
