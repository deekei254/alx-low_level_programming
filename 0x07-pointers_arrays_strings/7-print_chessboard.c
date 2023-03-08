#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: 8 by 8 array
 */

void print_chessboard(char (*a)[8])
{
	int y, r = 0;

	for (y = 0; y < 8; y++)
	{
		_putchar(a[r][y]);
		if (y == 7 && r < 7)
		{
			r++;
			y = -1;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
