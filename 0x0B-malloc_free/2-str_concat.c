#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, s = 0;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] || s2[i])
	{
		i++;
		s++;
	}
	i = 0;
	a = malloc(sizeof(char) * s);
	if (a == NULL)
		return (NULL);
	while (*(s1 + i))
	{
		a[i] = s1[i];
		i++;
	}
	while (*(s2 + i))
	{
		a[i] = s2[j];
		i++;
		j++;
	}
	return (a);
	free(a);/*release memory space*/
}
