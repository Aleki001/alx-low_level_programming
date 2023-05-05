#include "main.h"
/**
 *print_binary - prints a binary no
 *@n: no to be coneverted
 *Return: void
 */
void print_binary(unsigned long int n)
{
	int x = sizeof(unsigned long int) * 8;
	unsigned long int no;

	no = 1UL << (x - 1);

	for (; no != 0;)
	{
		if ((n & no) != 0)
			_putchar('1');
		else
			_putchar('0');

		no >>= 1;

	}
}
