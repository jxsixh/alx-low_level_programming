#include "main.h"
#include <stdio.h>

/**
 * _strcpy - the string pointed to by src, including (/0)
 * @dest: first char
 * @src:  second char
 * Return: 0.
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
