#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * Description - Print number from n passed to 98
 *
 * Return: void
 */

void print_to_98(int n)
{
	int num;

	num = n;

	if (num < 98)
	{
		while (num < 98)
		{
			printf("%d", num);
			printf(", ");
			num++;
		}
	}
	else if (num > 98)
	{
		while (num > 98)
		{
			printf("%d", num);
			printf(", ");
			num--;
		}
	}
	printf("%d\n", 98);
}
