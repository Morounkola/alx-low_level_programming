#include <stdio.h>

/**
 * main - print lowercase letters in reverse
 *
 * ReturnL Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');
	return (0);
}
