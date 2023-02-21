#include "main.h"

/**
 * _abs - to determine the absolute value of an integer
 * @t: variable to determine the absolute value of an integer
 * Return: t if successful
 */
int _abs(int t)
{
	if (t < 0)
	t *= -1;
	return (t);
}
