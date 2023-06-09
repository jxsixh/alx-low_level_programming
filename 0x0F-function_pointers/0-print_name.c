#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	void (*fxn)(char *);

	if (name == NULL || f == NULL)
		return;
	fxn = f;
	fxn(name);
}
