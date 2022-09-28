#include "main.h"

/**
 * _memset - Task 0 Soln: fills a block with a constant byte with a constatnt byte
 * @s: address to memory block
 * @b: char to be used
 * @n: number of bytes to used
 *
 * Return: pointer to the memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n-1] = b;
		n--;
	}
	return (s);
} 
