#include "main.h"

/**
 * _puts - Task 3 main entry
 * Description: function that prints a string to stdout
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
