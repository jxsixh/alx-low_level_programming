#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: integer
 * @size: integer
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int n, b, c;
	int i = 0, j = 0;

	for (n = 0; n < size; n++)
	{
		c = (n * size) + n;
		i += a[c];
	}
	for (b = 0; b < size; b++)
	{
		c = (b * size) + (size - 1 - b);
		j += a[c];
	}
	printf("%a, %a\n", i, j);
}
