#include "main.h"
#include <stdio.h>

/*global declaration*/
int sqrt_rec(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer to calculate square root
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_rec(n, 0));
}

/**
 * sqrt_rec - checks to find natural square root
 * @n: integer to calculate square root
 * @i: for iterating
 * Return: int(square root)
 */
int sqrt_rec(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_rec(n, i + 1));
}
