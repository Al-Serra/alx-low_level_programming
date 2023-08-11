#include <unistd.h>

/**
 * main - the entry function
 *
 * Return: one, returning an error status
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
