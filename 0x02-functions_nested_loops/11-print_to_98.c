#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * Description - Print number from n passed to 98
 *
 * Return: void
 */

void print_to_98(int n)
{
	int num = n;

	while (num < 98)
	{
		_putchar('%d, ', num);
	}
	_putchar('%d', 98);

	return (0);
}
