#include "main.h"
/**
 *  _islower - a function that checks for lowercase character
 * @c: the intger(parameter)to be checked
 *  Return: 1 for lowercase character,
 *  ZERO for else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
