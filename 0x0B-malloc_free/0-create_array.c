#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size and assign char
 * @size: size of array
 * @c: char to assign
 * Description: create array of size and assign char
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int h;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (h = 0; h < size; h++)
		str[h] = c;
	return (str);
}
