#include "main.h"
#include <ctype.h>

/**
 * isupper - main entry
 * Description: determine wheather a letter is uppercase or lowercase
 * Return: 0 or 1 depending on input passed
 */

int _isupper(int c)
{
	char c;

	if (isupper(c) == 1)
	{
		return (1);
	}
	/*else
	{
		return (0);
	}*/
	return (0);
}
