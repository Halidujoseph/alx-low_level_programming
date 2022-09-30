#include "main.h"
/**
 * print_alphabet_x10 - function to print alphabet 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int n, i = 0;

	while (i < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		n++;
	_putchar('\n');
	}
}
