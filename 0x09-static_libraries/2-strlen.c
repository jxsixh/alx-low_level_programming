#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: character
 * Return: 0.
 */
int _strlen(char *s)
{
	int n = 0;

	for (; *s++;)
		n++;
	return (n);
}

