#include "main.h"

/**
 * _isdigit - a digit (0 through 9)
 * @c: checked digitaly
 * Return: 1 if c is a digit or return 0 if not
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
