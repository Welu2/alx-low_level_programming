#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int r, w;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	r = w = 0;
	while (s1[r] != '\0')
		r++;
	while (s2[w] != '\0')
		w++;
	concat = malloc(sizeof(char) * (r + w + 1));

	if (concat == NULL)
		return (NULL);
	r = w = 0;
	while (s1[r] != '\0')
	{
		concat[r] = s1[r];
		r++;
	}

	while (s2[w] != '\0')
	{
		concat[r] = s2[w];
		r++, w++;
	}
	concat[r] = '\0';
	return (concat);
}
