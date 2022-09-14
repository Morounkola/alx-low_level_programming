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
	int num;

	num = n;

	while (num < 98)
	{
		_putchar(num);
		_putchar(',');
		_putchar(' ');
		num++;
	}
	_putchar('9');
	_putchar('8');

	return (0);
}
