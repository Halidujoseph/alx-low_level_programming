#include "main.h"

/**
 * _isdigit - function to check integer 0 - 9
 * @c: checks input of function
 * Return: Success
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
