#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list val;
	int x, i;
	char *str;

	va_start(val, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(val, int));
				x = 0;
				break;
			case 'i':
				printf("%i", va_arg(val, int));
				x = 0;
				break;
			case 'f':
				printf("%f", va_arg(val, double));
				x = 0;
				break;
			case 's':
				str = va_arg(val, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				x = 0;
				break;
			default:
				x = 1;
				break;
		}
		if (format[i + 1] != '\0' && x == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(val);
}
