#include <stdio.h>

/**
 * start - prints
 * Returm: void
 */
void start(void) __attribute__ ((constructor));

/**
 *start - implement
 */
void start(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
