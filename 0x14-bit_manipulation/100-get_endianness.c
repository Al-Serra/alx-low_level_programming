#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	unsigned int i;

	return ((int) (((char *)&i)[0]));
}
