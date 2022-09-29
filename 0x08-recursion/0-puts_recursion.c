#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_put_recursion(s + 1);
	}
}
