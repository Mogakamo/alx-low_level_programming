#include "holberton.h"

/**
 * swap_int - swaps the value of two intergers
 * @a: pointer a
 * @b: pointer b
 */
void swap_int(int *a, int *b)
{
	*a = *b + *a;
	*b = *a = *b;
	*a = *a - *b;
}

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int c = 0;

	while (c < n / 2)
	{
		swap_int(a + counter, a + (n - c - 1));
		c++;
	}
}
