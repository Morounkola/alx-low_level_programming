#include "main.h"

/**
 * _stcmp - main entry for Task 1
 * Description: function that compares 2 strings
 * @s1: first string, to be compared with the second string
 * @s2: second string, to be compared with the first string
 * Return: concatenated string
 */

int *_strcmp(char *s, char *s2)
{
	int cnt, dif;

	cnt = 0;
	while (s1[cnt] == s2[cnt] && s1[cnt] != '\0')
	{
		cnt++;
	}

	dif = s1[cnt] - s2[cnt];
	return (dif);
}
