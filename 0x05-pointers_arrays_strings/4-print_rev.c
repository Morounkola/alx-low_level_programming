#include "main.h"

/**
 * print_rev - Task 4 main entry
 * Description: function that prints string paased from the back
 * @s: string to be passed
 * Return: Reversed string
 */

void print_rev(char *s)
{
	int x = 0;
	int y;

	while (s[x] != '\0')
	{
		x++;
	}

	for (y = x - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}

	_putchar('\n');
}
	/*int x;
	int y;

	x = 0;
	y = 0;

	while (s[x] != '\0')
	{
		y++;
		x++;
	}

	while (y >= 0)
	{
		_putchar(s[y - 1]);
		y--;
	}

	_putchar('\n');*/
