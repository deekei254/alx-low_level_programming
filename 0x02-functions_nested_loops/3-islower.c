#include "main.h"

/**
 * _islower - checks if input is lowercase
 * @c: variable to determine if input is lowercase
 * Return: 0 if successful
 */

int _islower(int c)
{
int alph;
alph = 0;
if (c >= 'a' && c <= 'z')
{
alph = 1;
}
return (alph);
}
