#include "main.h"

/**
 * _isupper - main entry
 * @c: the letter to be tested
 * Description: determine wheather a letter is uppercase or lowercase
 * Return: 0 or 1 depending on input passed
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}

	return (0);
}
