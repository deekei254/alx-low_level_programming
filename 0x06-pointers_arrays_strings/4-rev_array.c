#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: int array to reverse
 * @n: number of elements in the array
 * Return: concatenated string
 */

void reverse_array(int *a, int n)
{
	int w;
	int e;

	for (w = 0; w < n--; w++)
	{
	e = a[w];
	a[w] = a[n];
	a[n] = e;
	}
}
