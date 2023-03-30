#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 * @dest: string
 * @src: string
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	int i = 0;

	while (dest[i] != '\0')
	{
		dest++;
	}
	int j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		dest++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
