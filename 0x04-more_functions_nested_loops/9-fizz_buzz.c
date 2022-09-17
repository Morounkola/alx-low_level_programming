#include "main.h"
#include <stdio.h>

/**
 * main - The fizz buzz test Task 9
 * Description: 1 to 100. Fizz for numbers multiples of 3
 * Buzz for multiples of 5, and FizzBuzz for muliples of both
 * Return: Always 0.
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%i", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}

		i++;
	}
	putchar('\n');
	return (0);
}

