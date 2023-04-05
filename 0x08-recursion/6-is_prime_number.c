#include "main.h"
/**
 *is_prime_number - checks if prime number
 *@n: number to be checked
 *Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (prime_recursive(n, 2));
}

/**
 *prime_recursive - checks if prime number or not
 *@n: number to be checked
 *@x: checker
 *Return: 1 or 0
 */
int prime_recursive(int n, int x)
{
	if (n <= 1)
		return (0);
	if (x * x > n)
		return (1);
	if (n % x == 0)
		return (0);

	return (prime_recursive(n, x + 1));
}
