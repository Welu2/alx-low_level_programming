#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: string length
 */
int _strlen(char *string)
{
	int k;

	for (k = 0; string[k] != '\0'; k++)
		
		return (k);
}
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
	int d1, d2, j, e;

	e = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (e < 0)
		return (NULL);
	if (e >= _strlen(s2))
		e = _strlen(s2);

	j = _strlen(s1) + e + 1;
	u = malloc(sizeof(*u) * j);
	if (u == NULL)
		return (NULL);
	for (d1 = 0; s1[d1] != '\0'; d1++)
		u[d1] = s1[d1];
	for (d2 = 0; d2 < e; d2++)
		u[d2 + d1] = s2[d2];
	u[d1 + d2] = '\0';
	return (u);
}
