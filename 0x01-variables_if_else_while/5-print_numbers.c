#include <stdio.h>

/**
 * main -print all single digit numbers on a sinle line
 *
 * Return: Always 0.
 */

int main(void)
{
	int digits;

	for (digits = 0; digits < 10; digits++)
		printf("%d", digits);

	printf("\n");

	return (0);
}
