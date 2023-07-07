#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints binary representationof a number
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (; m != 0;)
	{
		if ((n & m) != 0)
		{
			printf("1");
			flag = 1;
		}
		else if (flag == 1)
			printf("0");

		m >>= 1;
	}
}
