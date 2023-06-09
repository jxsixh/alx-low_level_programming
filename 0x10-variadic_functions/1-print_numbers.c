#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	while (i < n)
	{
		printf("%d", va_arg(ap, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(ap);

	printf("\n");
}
