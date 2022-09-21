#include "main.h"
#include <stdio.h>

/**
 * print_array - Task 8 main entry
 * Description: function that prints an array
 * @a: pinter
 * @n: integer
 * Return: an array of int type
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
