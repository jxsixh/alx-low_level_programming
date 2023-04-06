#include "main.h"
#include <stdio.h>

/*global declaration*/
int _strlen_recursion(char *s);
int chkpal(char *s, int i, int j);

/**
 * is_palindrome - determines if a string is a palindrome or not
 * @s: string
 * Return:1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (chkpal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns length of string
 * @s: string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * chkpal - checks each character for palindrome by recursion
 * @s: string
 * @i: for iteration
 * @j: string length
 * Return: int(1 for palindrome and 0 if otherwise)
 */

int chkpal(char *s, int i, int j)
{
	if (s[i] != *(s + j - 1))
		return (0);
	if (i >= j)
		return (1);
	return (chkpal(s, i + 1, j - 1));
}


