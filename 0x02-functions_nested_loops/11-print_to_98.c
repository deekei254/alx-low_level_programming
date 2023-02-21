#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - count to 98
 * @a: variable to determine whether input is greater, less or equal to 98
 *
 */

void print_to_98(int a)
{
if (a > 98)
{
for (; a >= 98; a--)
{
printf("%d", a);
if (a != 98)
printf(", ");
else
printf("\n");
}
}
else if (a < 98)
{
for (; a <= 98; a++)
{
printf("%d", a);
if (a != 98)
printf(", ");
else
printf("\n");
}
}
else
{
printf("%d\n", a);
}
}
