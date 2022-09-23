#include "main.h"

/**
 * _strncat - main entry for Task 1
 * Description: function to join 2 strings together
 * @dest: first string, to which the second will be added to
 * @src: second string that willbe added to the *dest
 * @n: the max byte to be used from src
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, x;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}

	for (x = 0; x < n && src[x] != '\0'; x++, len++)
	{
		dest[len] = src[x];
	}
	dest[len] = '\0';
	return (dest);
}
