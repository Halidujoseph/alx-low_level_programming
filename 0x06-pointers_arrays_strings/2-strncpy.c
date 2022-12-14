#include "main.h"
/**
 * _strncpy - c function that copies a string
 * if the lenght of the source string is less than the maxtimum byte number,
 * the remainder destination filled null bytes
 * @dest: buffer storing the string
 * @src: the source string
 * @n: max number of byte codied
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
