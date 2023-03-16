#include "main.h"

/**
 * _realloc - reallocates a memory block using maloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *luck, *relloc;
	unsigned int g;

	if (ptr != NULL)
		luck = ptr;
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	relloc = malloc(new_size);
	if (relloc == NULL)
		return (0);
	for (g = 0; g < (old_size || g < new_size); g++)
	{
		*(relloc + g) = luck[g];
	}
	free(ptr);
	return (relloc);
}
