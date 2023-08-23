#include "main.h"
/**
 * *string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @k: parameter, type char
 * Return: k
 */
char *string_toupper(char *k)
{
	int s;

	for (s = 0; k[s] != '\0'; s++)
	{
		if (k[s] >= 'a' && k[s] <= 'z')
			k[s] = (int)k[s] - 32;
	}
	return (k);
}
