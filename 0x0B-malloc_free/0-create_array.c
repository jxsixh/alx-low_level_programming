#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of characters
 * @size: array size
 * @c: character
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *a;

	a = malloc(size);
	if (size == 0)
		return (NULL);
	if (a == NULL)
		return (NULL);
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
	free(a);/*to release mem space*/
}

