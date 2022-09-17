#include "main.h"

/**
 * more_numbers - Task 5 main entry
 * Description: print numbers from 0 to 14, 10 times
 * Return: void
 */

void more_numbers(void)
{
	int x, y, a, b, j;

	x = 10;
	y = 14;
	a = 0;
	b = 0;

	while (a < (x + 1))
	{
		while (b < (y + 1))
		{
			j = b;
			if (b > 9)
			{
				j = b
				_putchar('1');
				j = b % 10;
			}
			_putchar('0' + j);
			b++;
		}
		_putchar('\n');
		a++;
	}
}
