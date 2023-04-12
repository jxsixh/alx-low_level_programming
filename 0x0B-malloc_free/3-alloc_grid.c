#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: grid width
 * @height: grid height
 * Return: NULL if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	while (i < height)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			while (i >= 0)
			{
				free(a[i]);
				i--;
			}
			free(a);
			return (NULL);
		}
		i++;
	}
	j = 0;
	while (j < height)
	{
		i = 0;
		while (i < width)
		{
			array[j][i] = 0;
			i++;
		}
		j++;
	}
	return (a);
}
