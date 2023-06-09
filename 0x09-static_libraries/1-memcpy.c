#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area.
 * @dest: destination of copied bytes
 * @src: source of copied bytes
 * @n: number of bytes
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
