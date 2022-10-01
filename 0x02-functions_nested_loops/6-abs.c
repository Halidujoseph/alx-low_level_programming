#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @number: number is a positive or negative interger
 *
 * Return: int
 */
int _abs(int number)
{
	int result;

	if (number < 0)
	{
		result = number * -1;
		return (result);
	}
	else
	{
		result = number;
			return (result);
	}
}
