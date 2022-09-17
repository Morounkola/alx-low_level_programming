#include "main.h"

/**
 * print_square - Task 8 entry
 * Description: print square of size input passed
 * @size: dimension of square to be printed
 * Return: void
 */

void print_square(int size)
{
	int i = 0; ii;

	while (i < size && size > 0)
	{
		ii = 0;
		while (ii <  size)
		{
			_putchar('#');
			ii++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
