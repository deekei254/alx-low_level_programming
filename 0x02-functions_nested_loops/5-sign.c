#include "main.h"

/**
 * print_sign - checks if inputs are positive, negative or equal to zero
 * @n: variable to determine positive, negative or positive inputs
 * Return: 0 if successful
 */

int print_sign(int n)
{
int y;
if (n > 0)
{
_putchar('+');
y = 1;
}
else if (n < 0)
{
_putchar('-');
y = -1;
}
else
{
_putchar('0');
y = 0;
}
return (y);
}
