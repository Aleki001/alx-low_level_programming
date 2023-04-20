#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_all - prints anything
 *@format: format specifier
 *@...: arguments
 *Return: void
 */
void print_all(const char * const format, ...)
{
	int flag, count = 0;
	va_list list;

	va_start(list, format);

	while (format != NULL && format[count] != '\0')
	{
		char *string;

		switch (format[count])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				flag = 0;
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				flag = 0;
				break;
			case 's':
				string = va_arg(list, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[count + 1] != '\0' && flag != 1)
			printf(", ");
		count++;
	}
	va_end(list);
	putchar('\n');
}
