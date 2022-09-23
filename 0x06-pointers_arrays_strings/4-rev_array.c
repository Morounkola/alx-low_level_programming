#include "main.h"

/**
 * reverse_array - main entry for Task 4
 * Description: function that reverses the content on an int array
 * @a: pointer to array
 * @n: no. of elemnts of array a
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int cnt, tmp;

	n = n - 1;
	cnt = 0;
	while (cnt <= n)
	{
		tmp = a[cnt];
		a[cnt++] = a[n];
		a[n--] = tmp;
	}
}
