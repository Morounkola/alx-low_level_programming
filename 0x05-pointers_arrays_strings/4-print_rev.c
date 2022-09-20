#include "main.h"

/**
 * print_rev - Task 4 main entry
 * Description: function that prints string paased from the back
 * @s: string to be passed
 * Return: Reversed string
 */

void print_rev(char *s)
{
	int x, y;

	int x = 0;
	int y = 0;

	while (str[x] != '\0')
	{
		y++;
		x++;
	}

	while (y >= 0)
	{
		_putchar(str[y]);
		y--;
	}

	_putchar('\n');
}
