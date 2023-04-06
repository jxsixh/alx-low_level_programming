#include "main.h"
#include <stdio.h>

/*global declaration*/
int sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer to calculate square root
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt(n, 0));
}

/**
 * sqrt - checks to find natural square root
 * @n: integer to calculate square root
 * @i: for iterating
 * Return: int(square root)
 */
int sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt(n, i + 1));
}
