#include "main.h"

/**
 * print_most_numbers - Task 4 main entry
 * Description: print numbers from 0 to 9, excluding 2 & 4
 * Return: void
 */

void print_most_numbers(void)
{
	char i = 0;

	while (i < 10)
	{
		if (i != 2 || i != 4)
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}
