#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory
 * @old_size: previous byte space
 * @new_size: new byte space
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
{
	char *p, *a;
	unsigned int i = 0;

	a = p;
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = ptr;
	if (!p)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	i = 0;
	while (i < old_size)
	{
		p[i] = a[i];
		i++;
	}
	free(ptr);
	return (p);
}
