#include "main.h"
/**
 *factorial - return factorial of a given number
 *@n: factorial number
 *Return: 1, 0, factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));

}
