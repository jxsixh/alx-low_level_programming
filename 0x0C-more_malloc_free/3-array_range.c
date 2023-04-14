#include <stdlib.h>
#include "main.h"

/**
 * array_range -  creates an array of integers.
 * @min: minimum int
 * @max: maximum int
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i = 0, lmt;
	int *a;

	if (min > max)
		return (NULL);
	lmt = (max - min) + 1;
	a = malloc(sizeof(int) * lmt);
	if (a == NULL)
		return (NULL);
	while (i < lmt)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
