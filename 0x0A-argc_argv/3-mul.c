#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, mul;

	mul = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (x = 1; x < argc; x++)
	{
		mul = mul * atoi(argv[x]);
	}
	printf("%d\n", mul);
	return (0);
}
