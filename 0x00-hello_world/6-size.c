#include <stdio.h>

/**
 * main - print the size of variables types
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %zu bytes\n", sizeof(a));
	printf("Size of an int: %zu bytes\n", sizeof(b));
	printf("Size of a long int: %zu bytes\n", sizeof(c));
	printf("Size of a long long int: %zu bytes\n", sizeof(d));
	printf("Size of a float: %zu bytes\n", sizeof(e));
	return (0);
}
