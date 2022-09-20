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

