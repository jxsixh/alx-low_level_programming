#include "variadic_functions.h"
/**
 * sum_them_all - sums up all of the parameters
 * @n: parameters
 * Return: sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...);
{
	unsigned int i;
	int s;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		s += va_arg(ap, int);

	va_end(ap);

	return (s);
}
