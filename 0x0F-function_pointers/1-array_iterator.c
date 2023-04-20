#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: pointer to array
 * @size: array size
 * @action: pointer to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;
	int j = size;
	void (*atn)(int);

	atn = action;
	if (array == NULL || atn == NULL)
		return;
	while (i < j)
	{
		if (i == j)
			break;
		atn(*(array + i));
		i++;
	}
}

