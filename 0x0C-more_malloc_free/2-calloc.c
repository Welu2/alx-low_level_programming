#include "main.h"

/**
 * _calloc - allocates memoria for nmemb
 * @nmemb: niumber of element in the array
 * @size: bytes for each position in the array
 * Return: pointer void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int y;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);

for (y = 0; y < nmemb * size; y++)
c[y] = 0;

return (c);
}
