#include "main.h"

/**
 * print_diagonal - Task 7 main entry
 * @n: number of times / to be printed
 * Description: print / n times diagonally
 * Return: void
 */

void print_diagonal(int n)
{
		int a = 0;
		int k = 0;

		while (a < n && n > 0)
		{
			while (k < a && k > 0)
			{
				_putchar(' ');
				k++
			}
			_putchar('\\');
			_putchar('\n');
			a++;
		}
		if (a == 0)
		{
			_putchar('\n');
		}
}
