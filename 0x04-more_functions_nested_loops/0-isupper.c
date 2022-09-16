#include "main.h"
#include <stdio.h>

/**
 * _isupper - function to check upper case alphabet
 *
 * @c: checks input of function
 *
 * Return: return 1 if 'c' is uppercase
 * else always 0 (sucess)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
