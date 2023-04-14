#include "main.h"
#include <stdlib.h>

/**
 * _print_no - moves a string one place to the left and prints the string
 * @str: string
 * @l: string size
 * Return: void
 */
void _print_no(char *str, int l)
{
	int i, j;

	i = j = 0;
	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == l - 1)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	free(str);
}
/**
 * mul - multiplies a char with a string and places the answer into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination
 * @dest_index: highest index
 * Return: pointer to destination
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int x, y, mul, mulr, addr, add;

	mulr = addr = 0;
	for (x = num_index, y = dest_index; x >= 0; x--, y--)
	{
		mul = (n - '0') * (num[x] - '0') + mulr;
		mulr = mul / 10;
		add = (dest[y] - '0') + (mul % 10) + addr;
		addr = add / 10;
		dest[y] = add % 10 + '0';
	}
	for (addr += mulr; y >= 0 && addr; y--)
	{
		add = (dest[y] - '0') + addr;
		addr = add / 10;
		dest[y] = add % 10 + '0';
	}
	if (addr)
	{
		return (NULL);
	}
	return (dest);
}
/**
 * check - checks the arguments to confirm they are digits
 * @av: arg pointer
 * Return: 0 or 1
 */
int check(char **av)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * initial - initializes a string
 * @str: initialized string
 * @p: string length
 *
 * Return: void
 */
void initial(char *str, int p)
{
	int i;

	for (i = 0; i < p; i++)
		str[i] = '0';
	str[i] = '\0';
}
/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: zero, or 98 if failure
 */
int main(int argc, char *argv[])
{
	char *a;
	char *q;
	int w1, w2, wm, di, i;
	char e[] = "Error\n";

	if (argc != 3 || check(argv))
	{
		for (di = 0; e[di]; di++)
			_putchar(e[di]);
		exit(98);
	}
	for (w1 = 0; argv[1][w1]; w1++)
		;
	for (w2 = 0; argv[2][w2]; w2++)
		;
	wm = w1 + w2 + 1;
	a = malloc(wm * sizeof(char));
	if (a == NULL)
	{
		for (di = 0; e[di]; di++)
			_putchar(e[di]);
		exit(98);
	}
	initial(a, wm - 1);
	for (di = w2 - 1, i = 0; di >= 0; di--, i++)
	{
		q = mul(argv[2][di], argv[1], w1 - 1, a, (wm - 2) - i);
		if (q == NULL)
		{
			for (di = 0; e[di]; di++)
				_putchar(e[di]);
			free(a);
			exit(98);
		}
	}
	_print_no(a, wm - 1);
	return (0);
}
