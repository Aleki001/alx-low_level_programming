#include "main.h"
/**
 * print_line - prints a straight line
 *
 *@n: number of times character should be printed
 *
 * Return: Always void
 */

void print_line(int n)
{
	int ch;

	for (ch =  0; ch <= n; ch++)
	{
		if (n >= 1)
			_putchar('_');
	}
	_putchar('\n');
}
