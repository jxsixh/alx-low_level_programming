#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: integer
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int x = 0, y = 0;
	char *str;
	int s;
	int cnt = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + x))
	{
		x++;
	}

	s = cnt + x + 1;
	str = malloc(s);
	if (str == NULL)
		return (NULL);
	x = 0;
	while (*(s1 + x))
	{
		str[x] = s1[x];
		x++;
	}
	while (y < cnt)
	{
		str[x] = s2[y];
		x++;
		y++;
	}
	str[x] = '\0';
	return (str);
}

