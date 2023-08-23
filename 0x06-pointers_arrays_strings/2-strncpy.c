#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: char type destintation string
 * @src: char type source string
 * @n: number of bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s;

	for (s = 0; s < n && src[s] != '\0'; s++)
		dest[s] = src[s];
	while (s < n)
	{
		dest[s] = '\0';
		s++;
	}
	return (dest);
}
