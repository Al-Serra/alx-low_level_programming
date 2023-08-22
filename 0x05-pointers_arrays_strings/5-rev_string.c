#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to be reversed & printed
 */
void rev_string(char *s)
{
	int i;
	char k;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	for (i = 0; i < len / 2; i++)
	{
		k = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = k;
	}
}
