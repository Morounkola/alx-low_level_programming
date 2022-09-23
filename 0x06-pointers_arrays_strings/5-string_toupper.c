#include "main.h"

/**
 * *string_toupper - main entry for Task 5
 * Description: function that changes lowercase letters to uppercase
 * @x: pointer to string
 * Return: uppercase string
 */

char *string_toupper(char *x)
{
	int len;

	len = 0;

	while (x[len] != '\0')
	{
		if ((x[len] > 96) && (x[len] < 123))
		{
			x[len] = x[len] - 32;
		}
		len++;
	}
	return (x);
}
