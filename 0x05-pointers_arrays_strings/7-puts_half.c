#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: char t
 * Return: void
 */
void puts_half(char *str)
{
	int  = 0, n;

	while (str[s] != '\0')
		s++;
	if (s + 1 % 2 != '0')
		n = (s - 1) / 2;
	else
		n = (s / 2);
	n++;

	for (s = n; str[s] != '\0'; s++)
	_putchar(str[s]);
	_putchar('\n');
}
