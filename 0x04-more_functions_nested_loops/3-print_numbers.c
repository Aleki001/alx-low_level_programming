#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: Null
 */

void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');


}
