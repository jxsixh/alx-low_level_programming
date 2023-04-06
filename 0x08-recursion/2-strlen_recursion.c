#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int j = 0;

	if (*s)
	{
		j++;
		j = j + _strlen_recursion(s + 1);
	}
	return (j);
}

