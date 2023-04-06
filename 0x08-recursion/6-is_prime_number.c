#include "main.h"
#include <stdio.h>

/*global declaration*/
int primeno(int n, int i);

/**
 * is_prime_number - determines a prime number
 * @n: integer to check
 * Return: 1 if a prime number and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primeno(n, n - 1));
}

/**
 * primeno - checks for prime numbers by recursion
 * @n: integer to check
 * @i: integer for iterating
 * Return: 1 if a prime number and 0 otherwise
 */
int primeno(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (primeno(n, i - 1));
}
