#include "main.h"

/**
 * puts_half - Task 7 main entry
 * Description: function that prints only half of a string
 * @str: string to be passed
 * Return: Half string
 */

void puts_half(char *str)
{
	int count = 0, i;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			break;
		}
		count++;
	}

	if (count % 2 == 1)
	{
		i = count / 2;
	}
	else
	{
		i = (count - 1) / 2;
	}
	for (i++; i < count; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}
