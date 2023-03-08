#include "main.h"

/**
 * print_diagsums - add diagonal lines of a square matrix
 * @a: square matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int y = 0, t = size - 1;
	int valuey = 0, valuet = 0;
	int *p = a;

	for (; y <= size * size; y += (size + 1), t += (size - 1))
	{
		valuey += *(p + y);
		valuet += *(p + t);
	}
	printf("%d, %d\n", valuey, valuet);
}
