#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * Retur: void
 */
void jack_bauer(void)
{
	int s, k;

	for (s = 0; s < 23; s++)
	{
		for (k = 0; k < 60; k++)
		{
			_putchar(s / 10 + '0');
			_putchar(s % 10 + '0');
			_putchar(':');
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			_putchar('\n');
		}
	}
}
