#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_strings - prints strings
 *@separator: add a comma after a string
 *@n: no of arguments
 *@...: arguments
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;

	char *string;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char *);

		if (string == NULL)
			printf("nil");
		else
			printf("%s", string);

		if (separator != NULL && i  < n - 1)
			printf("%s", separator);

	}

	va_end(list);

	putchar('\n');
}
