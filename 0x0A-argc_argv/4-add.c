#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, int **argv)
{
	int i, n, sum = 0;
	char *j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i]; i++)
	{
		n = (argv[i], *j, 10);
		if (*j)
		{
			printf("Error\n");
			return (0);
		}
		else
		{
			sum = sum + n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
