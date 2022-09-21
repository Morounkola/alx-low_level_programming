#include "main.h"

/**
 * puts2 - Task 6 main entry
 * Description: function that prints chararcters of a string at 2 interval
 * @str: string to be passed
 * Return: Reversed string
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}

	_putchar('\n');
}
