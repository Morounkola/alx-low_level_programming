#include "main.h"

/**
 * swap_int - Task 1 code
 * Description: write a function that swaps the values of two integar
 * @a: first integer, to be swapped with the second
 * @b: second integer, to be swapped with the first
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
