#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet
 * Return: 0  if successful
 */

void print_alphabet_x10(void)
{
char alph;
int x;
x = 0;

while (x < 10)
{
for (alph = 'a'; alph <= 'z'; alph++)
_putchar(alph);
_putchar('\n');
x++;
}
}
