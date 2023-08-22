#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the evaluated string
 * Return: the length
 */
int _strlen(char *s)
{
	int k;

	k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}
