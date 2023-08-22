#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 *  including the terminating null byte (\0),
 *  to the buffer pointed to by dest
 *  @dest: pointer to the buffer where the string is copied
 *  @src: the copied string
 *  Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int s;

	for (s = 0; src[s] != '\0'; s++)
		dest[s] = src[s];
	dest[s] = '\0';
	return (dest);
}
