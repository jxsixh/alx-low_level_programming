#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searches for integer.
 * @array: array of elements
 * @size: number of elements
 * @cmp: pointer to function
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j, i = 0;
	int (*p)(int);

	p = cmp;
	if (array == NULL || p == NULL)
		return (-1);
	while (i < size)
	{
		j = p(*(array + i));
		if (j != 0)
			return (i);
		i++;
	}
	if (j == 0)
		return (-1);
	else
		return (i);
	return (-1);
}
