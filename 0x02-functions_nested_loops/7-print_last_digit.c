#include "main.h"

/**
 * print_last_digit - gets the last number of a variable
 * @y: variable to extract last number
 * Return: y if successful
 */

int print_last_digit(int y)
{
y %= 10;
if (y < 0)
y *= -1;
y += 48;
_putchar(y);
return (y - '0');
}
