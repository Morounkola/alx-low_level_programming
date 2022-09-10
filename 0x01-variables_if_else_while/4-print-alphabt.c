#include <stdio.h>

/**
 * main - Print letters in lowercase except for letter q & e
 *
 * Return: Always 0.
 */

int main(void)
{
	char letz;

	for (letz ='a'; letz <= 'z'; letz++)
	{
		if ((letz != 'e') && (letz != 'q'))
			putchar(letz);
	}

	putchar('\n');
	return (0);
}
