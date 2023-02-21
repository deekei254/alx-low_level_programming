#include "main.h"

/**
 * _isalpha - checks if input is uppercase
 * @c: variable to determine if input is lowercase
 * Return: 0 if successful
 */

int _isalpha(int c)
{
int alph;
alph = 0;
if (c >= 'a' && c <= 'z')
alph = 1;
else if (c >= 'A' && c <= 'Z')
alph = 1;
return (alph);
}
