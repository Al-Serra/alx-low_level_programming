#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: array elemnts
 */
void reverse_array(int *a, int n)
{
	int s, k;

	for (s = 0; s < (n / 2); s++)
	{
		k = a[s];
		a[s] = a[n - s - 1];
		a[n - s - 1] = k;
	}
}
