#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *a;

	if (str == 0)
		return (NULL);
	while (str[i])
	{
		i++;
		j++;
	}
	i = 0;
	if (1)
		a = malloc(sizeof(char) * (j + 1));
	else
		return (NULL);
	if (a == NULL)
		return (NULL);
	while (str[i])
	{
		*(a + i) = *(str + i);
		i++;
	}
	a[i] = '\0';
	return (a);
}
