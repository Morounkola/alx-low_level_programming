#include "main.h"

/**
 * _isdigit - main entry
 * @c: digit to be passed into a function
 * Description: determines whether a character passed is a digit
 * Return: 0 or 1 depending on the character passed
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}

	return (0);
}
