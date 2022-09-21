#include "main.h"
#include <stdio.h>

/**
 * strcpy - Task 9 main entry
 * Description: function that copies from src to dest
 * @dest: destinationr
 * @src: source
 * Return: an array of int type
 */


char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
