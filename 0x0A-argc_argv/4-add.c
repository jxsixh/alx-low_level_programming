#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success, 1 for error
 */
int main(int argc, int *argv[])
{
	int i, n, sum = 0;

	for (i = 1; i <= argc - 1; i++)
	{
		for (n = 0; argv[i][n]; n++)
		{
			if (!(*(*(argv + i) + n) >= '0' && *(*(argv + i) + n) <= '9'))
			{
				puts("Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
