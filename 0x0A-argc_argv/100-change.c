#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints minimum no. of coins to make change for money.
 * @argc: argument count
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, i, j;
	int b = 0;
	int c[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	if (a <= 0)
	{
		puts("0");
		return (1);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			j = a / c[i];
			a -= j * c[i];
			b += j;
			if (a == 0)
				break;
		}
	}
	printf("%d\b", b);
	return (0);
}
