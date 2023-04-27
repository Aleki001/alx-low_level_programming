#include <stdio.h>
/**
 *xoxo - executes before main
 */
void __attribute__((constructor)) xoxo()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
