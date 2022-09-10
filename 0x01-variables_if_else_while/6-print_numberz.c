#include <stdio.h>

/**
 * main - print single digit numbers with putchar
 *
 * Return: Alwyas 0.
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
