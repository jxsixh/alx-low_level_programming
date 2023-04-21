#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - sums up all of the parameters
 * @n: parameters
 * Return: sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...);
{
	va_list ap;
	unsigned int s = 0, i = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	while (i < n)
	{
		s += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (s);
}
