#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print the result of the multiplication
 * @argc: argument counter
 * @argv: argument array
 * Return: 0
 */
int main(int argc, int **argv)
{
	int mul;

	if (argc !=  3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
