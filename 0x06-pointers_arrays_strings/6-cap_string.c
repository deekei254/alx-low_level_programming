#include "main.h"

/**
 * cap_string - take strings and capitalize words
 * @a: string to capitalize
 * Return: capitalized words
 */

char *cap_string(char *a)
{
	int y, x;
	char *seperators = ",;.!?\"(){} \n\t";

	for (y = 0; *(a + y) != '\0'; y++)
	{
	if (*(a + y) >= 'a' && *(a + y) <= 'z')
	for (x = 0; *(seperators + x) != '\0'; x++)
	{
	if (*(a + y - 1) == *(seperators + x))
	{
	*(a + y) -= 32;
	break;
	}
	else if (y == 0)
	{
	*(a + y) -= 32;
	break;
	}
	}
	}
	return (a);
}
