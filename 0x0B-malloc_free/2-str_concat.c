#include "main.h"
/**
 * _strlen - the length
 * @s: the string
 * Return: intger
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}
/**
 * *str_concat - concatenates two strings
 * @s1: 1st char
 * @s2: 2nd char
 * Return: pointer, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, k;
	char *h;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	h = malloc((size1 + size2) * sizeof(char) + 1);
	if (h == 0)
		return (0);

	for (k = 0; k <= size1 + size2; k++)
	{
		if (k < size1)
			h[k] = s1[k];
		else
			h[k] = s2[k - size1];
	}
	h[k] = '\0';
	return (h);
}
