#include "main.h"

/**
 * Task_1 Alphabet Game - Entry point
 *
 * Description: a function that prints alphabets in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char letter  = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
