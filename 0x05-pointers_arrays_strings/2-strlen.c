#include "main.h"

/**
 * _strlen - Task 2 main entry
 * Description: A function that returns the length pf string passed
 * @s: string to be passed into the function
 * Return: Always int i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
