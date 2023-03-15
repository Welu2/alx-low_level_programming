#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *l;
	int b, g = 0;

	if (str == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
		b++;

	l = malloc(sizeof(char) * (b + 1));

	if (l == NULL)
		return (NULL);

	for (g = 0; str[g]; g++)
		l[g] = str[g];

	return (l);
}
