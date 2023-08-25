#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: a string to encode
 * Return: the rotated (encoded)string s
 */
char *rot13(char *s)
{
	int i, k;
	char *a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; a[k] != '\0'; k++)
		{
			if (s[i] == a[k])
			{
				s[i] = b[k];
				break;
			}
		}
	}
	return (s);
}
