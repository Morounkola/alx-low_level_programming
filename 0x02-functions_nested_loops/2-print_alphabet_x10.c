#include "main.h"

/**
 * main - Print a to z then times with a new line in between
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int count = 10;

	while (count < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
		count++;
	}
}
