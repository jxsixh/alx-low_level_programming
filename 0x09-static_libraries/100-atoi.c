#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer.
 * @s:pointer
 * Return: 0.
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int n = 0;
	int j = 1;
	int i = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			j *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			i = 1;
			n = (n * 10) + (s[c] - '0');
			c++;
		}

		if (i == 1)
		{
			break;
		}

		c++;
	}

	n *= j;
	return (n);
}
