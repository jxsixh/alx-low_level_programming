#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of the multiplication
 * @argc: argument counter
 * @argv: argument array
 * Return: 0
 */
int main(int argc, int **argv)
{
	int num1, num2;

	if (argc <  3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
