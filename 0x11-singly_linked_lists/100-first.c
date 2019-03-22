#include <stdio.h>

void hareandtortoise(void) __attribute__((constructor));

/**
 * hareandtortoise - prints "You're beat! and yet, you must allow,\nI bore my
 * house upon my back!\n before the main function is executed.
 */
void hareandtortoise(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
