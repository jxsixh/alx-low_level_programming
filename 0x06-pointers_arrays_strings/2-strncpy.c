#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string.
 * @dest: destination of string
 * @src: source of string
 * @n: length of integer
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + 1), i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + 1) = '\0';
	}
	return (dest);
}
