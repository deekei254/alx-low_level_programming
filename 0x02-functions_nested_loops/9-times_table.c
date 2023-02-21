#include "main.h"

/**
 * times_table - to prin the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int q, w, e, r;

	for (q = 0; q <= 9; q++)
	{
		for (w = 0; w <= 9; w++)
		{
			e = q * w;
			if (e == 0 && w == 0)
				_putchar(e + '0');
			else if (e > 9)
			{
				r = e % 10;
				e /= 10;
				_putchar(',');
				_putchar(' ');
				_putchar(e + '0');
				_putchar(r + '0');

			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(e + '0');
			}
		}
		_putchar('\n');
	}
}
