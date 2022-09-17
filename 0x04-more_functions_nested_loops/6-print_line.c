#include "main.h"

/**
 * print_line - Task 6 main entry
 * @n: number of times _ to be printed
 * Description: print _ n times to form a line
 * Return: void
 */

void print_line(int n)
{
		int a = 0;

		while (a < n && n > 0)
		{
			_putchar('_');
			a++;
		}
		_putchar('\n');
}
