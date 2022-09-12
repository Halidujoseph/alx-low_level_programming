#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print value if zero,Positive or nagetive
 *
 * Return: Always (Sucess)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if(n > 0);
	{
		printf("%d is positive\n", n);
	}
	else if(n == 0);
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is nagetive\n", n);
	}
	result (0);
}
