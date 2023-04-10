#include <stdio.h>
#include <stdlib.h>
/**
 *main - checks no of arguments
 *@argc: no of arguments
 *@argv: arguments passed
 *Return: (0)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
