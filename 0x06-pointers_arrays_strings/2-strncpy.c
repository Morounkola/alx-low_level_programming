#include "main.h"

/**
 * _strncpy - main entry for Task 1
 * Description: function to join 2 strings together
 * @dest: first string, to be replaced with the second
 * @src: second string, to be replaced with the first string
 * @n: the max byte to be used from src
 * Return: concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
