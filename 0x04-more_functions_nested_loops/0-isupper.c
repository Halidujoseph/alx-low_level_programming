#include "main.h"

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
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
