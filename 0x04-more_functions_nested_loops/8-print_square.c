#include "main.h"

/**
 * print_square - Task 8 entry
 * Description: print square of size input passed
 * @n: dimension of square to be printed
 * Return: void
 */

void print_square(int n)
{
	int i = 0;
	int ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < n)
		{
			_putchar('#');
			ii++;
		}
		_putchar('\n');
		i++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
