#include "main.h"

/**
 * _strcat - main entry for Task 0
 * Description: function to join 2 strings together
 * @*dest: first string, to which the second will be added to
 * @*src: second string that willbe added to the *dest
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int len, x;
	
	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}

	for (x = 0; src[x] != '\0'; x++, len++)
	{
		dest[len] = src[x];
	}
	dest[len] = '\0';
	return (dest);
}
