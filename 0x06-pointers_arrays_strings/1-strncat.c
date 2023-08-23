#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: char type destintation string
 * @src: char type source string
 * @n: number of bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = strlen(dest);
	int s;

	for (s = 0; s < n && *src != '\0'; s++)
	{
		dest[destlen + s] = *src;
		src++;
	}
	dest[destlen + s] = '\0';
	return (dest);
}
