#include "main.h"

/**
 * main - Task_2 10x alphabet
 * Description: a program that prints alphabets ten times
 * with a new line in between
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int count = 0;

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
