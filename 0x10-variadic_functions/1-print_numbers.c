#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_numbers - prints numbers
 *@separator: separates numbers
 *@n: no of parameters/arguments
 *@...: infinite arguments
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;

	unsigned int i;
	int num;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int);

		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	putchar('\n');

	va_end(list);
}
