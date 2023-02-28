#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int Y = 0;
	int Z;

	while (s[Y] != '\0')
	Y++;
	for (Z = 0; Z < Y; Z++)
	{
		Y--;
		rev = s[Z];
		s[Z] = s[Y];
		s[Y] = rev;
	}
}
