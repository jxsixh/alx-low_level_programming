#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int n = 0, i;

	while (s[n] != '\0')
		n++;

	for (i = n--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
