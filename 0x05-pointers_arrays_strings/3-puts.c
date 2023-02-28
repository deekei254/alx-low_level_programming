#include "main.h"


/**
 * _puts - print a string
 * @str: string
 */

void _puts(char *str)
{
	int p;

	p = 0;

	while (str[p] != '\0')
	{
		 _putchar(str[p]);
		p++;
	}
		_putchar('\n');
}
