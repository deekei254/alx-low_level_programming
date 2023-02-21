#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 */

void jack_bauer(void)
{
int q, w, e, r;

for (q = '0'; q <= '2'; q++)
{
for (w = '0'; w <= '9'; w++)
{
for (e = '0'; e <= '6'; e++)
{
for (r = '0'; r <= '9'; r++)
{
if ((q == '2') && (w >= '4'))
{
continue;
}
else
{
_putchar(q);
_putchar(w);
_putchar(':');
_putchar(e);
_putchar(r);
_putchar('\n');
}
}
}
}
}
}
