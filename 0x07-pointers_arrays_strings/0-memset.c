#include "main.h"

/**
 * _memset - fills memory block with a constent byte
 * @s: address to memory block
 * @b: char to fill with
 * @n: number of bytes to be used
 *
 * Return: pointer to the memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
