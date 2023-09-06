#include "main.h"
/**
 * *_strdup - returns a pointer to a newly allocated space
 * in memory
 * which contains a copy of the string given as a parameter.
 * @str: the string
 * Return: ZERO
 */
char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *k;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;
	k = malloc(size * sizeof(*str) + 1);
	if (k == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			k[i] = str[i];
	}
	return (k);
}
