#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - sum of a and b
 * @a: first integer
 * @b: second integer
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference between a and b
 * @a: first integer
 * @b: second integer
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product of a and b
 * @a: first integer
 * @b: second integer
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - quotient of a and b
 * @a: first integer
 * @b: second integer
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulus of a and b
 * @a: first integer
 * @b: second integer
 * Return: modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
