#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, size1;
	unsigned int sumdiag1, sumdiag2;

	size1 = 0;
	sumdiag1 = 0;
	sumdiag2 = 0;

	size1 = (size * size) - 1;

	for (i = 0; i <= size1; i = i + (size + 1))
	{
		sumdiag1 = sumdiag2 + a[i];
	}
	for (i = (size - 1); i < size1; i = i + (size - 1))
	{
		sumdiag2 = sumdiag2 + a[i];
	}
	printf("%d, %d\n", sumdiag1, sumdiag2);
}
