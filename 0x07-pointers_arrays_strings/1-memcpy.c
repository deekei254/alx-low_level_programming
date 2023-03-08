#include "main.h"

/**
 * _memcpy - memset function
 * @dest: start point of string to change
 * @src: value that will replace
 * @n: number of bytes to change
 * Return: change pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	int y = 0;
	int t = n;

	for (; y < t; y++)
	{
		dest[y] = src[y];
		n--;
	}
	return (dest);
}
