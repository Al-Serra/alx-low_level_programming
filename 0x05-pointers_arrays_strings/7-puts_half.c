#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: the string to be printed
 */
void puts_half(char *str)
{
	int s, k;
	int len = 0;

	for (s = 0; str[s] != '\0'; s++)
		len++;
	k = (len - 1) / 2;
	for (s = k = 1; str[s] != '\0'; s++)
		_putchar(str[s]);
	_putchar('\n');
}
