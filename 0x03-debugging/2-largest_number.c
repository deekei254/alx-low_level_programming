#include "main.h"

/**
 * largest_number - gives the largest of tripple numbers
 * @a: first int
 * @b: second int
 * @c: third int
 * Return: largest no
 */
int largest_number(int a, int b, int c)
{
int largest;

if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}
