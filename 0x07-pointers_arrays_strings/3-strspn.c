#include "main.h"

/***
 * _strspn - gets the length of a prefix substring
 * @s: pointer to a char, string that will be checked
 * @accept: pointer to the substring we check for
 * Return: unsigned int, length of a prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				n++;
				break;
			}
			else if (accept[y + 1] == '\0')
			return (n);
			}
			s++;
	}
	return (n);
}

