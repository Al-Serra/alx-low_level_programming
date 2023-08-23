#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @s: a pointer where a string ti be encoded
 * Return: the encoded string
 */
char *leet(char *s)
{
	char *k = "aAeEoOtTlL";
	char *n = "4433007711";
	int m, j;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[m] == k[j])
				s[m] = n[j];
		}
	}
	return (s);
}
