#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char char1;
	int int1;
	long int lng_int1;
	long long int lng_lng_int1;
	float float1;

	printf("Size of a char: %zu byte(s)\n", sizeof(char1));
	printf("Size of an int: %zu byte(s)\n", sizeof(int1));
	printf("Size of a long int: %zu byte(s)\n", sizeof(lng_int1));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(lng_lng_int1));
	printf("Size of a float: %zu byte(s)\n", sizeof(float1));

	return (0);
}
