#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar("%d * %d = %d \n", i, j, i * j)
		}
		_putchar('\n');
	}
}
