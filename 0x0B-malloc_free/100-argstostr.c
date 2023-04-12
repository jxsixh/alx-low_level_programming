#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments in the program
 * @ac: argument counter
 * @av: argument vector
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int a = 0, b = 0;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);

for (i = 0; i < ac; i++)
{
	for (j = 0; *(*(av + 1) + j); j++, b++)
		;
	b++;
}
b++;
s = malloc(sizeof(char) * b);
if (s == NULL)
	return (NULL);
	for (i = 0; i < ac; i++)
{
	for (j = 0; *(*(av + i) + j); j++, a++)
			*(s + a) = *(*(av + i) + j);
			*(s + a) = '\n';
			a++;
			}
			*(s + a) = '\0';
			return (s);
			}
