#include "lists.h"
/**
 * s - prints a string before the main function is excuted
 */
void s(void) __attribute__((constructor));
void s(void)
{
	printf("You're beat! and yet, you must allow,\n");
		printf("I bore my house upon my back!\n");
}
