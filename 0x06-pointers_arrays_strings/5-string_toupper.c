#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string
 * Return: char
 */
char *string_toupper(char *str)
{
	for (size_t i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
	}
	return (str);
}
