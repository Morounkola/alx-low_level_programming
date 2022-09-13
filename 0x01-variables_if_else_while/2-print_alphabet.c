#include <stdio.h>

/**
 * main - code that prints alphabet in newline
 *
 * Return: Always 0
 */

int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		putchar(let);
	}
	putchar('\n');
	return (0);
}
