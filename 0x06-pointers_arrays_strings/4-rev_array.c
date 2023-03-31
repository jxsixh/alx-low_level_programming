#include "main.h"
#include <stdio.h>

/**
 * reverse_array -  reverses the content of an array of integers.
 * @a: First integer for array
 * @n: Second integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}

