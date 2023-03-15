#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size and assign char
 * @x: size of array
 * @q: char to assign
 *
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int h;

	str = malloc(sizeof(char) * x);
	if (x == 0 || str == NULL)
		return (NULL);

	for (h = 0; h < x; h++)
		str[h] = x;
	return (str);
}
