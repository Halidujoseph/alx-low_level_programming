#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main - print random number to variable
 * Return: 0
 */
int main(void)
{
	int n;
	int m;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("%s %d is %d and is ", last, n);

	if (m > 5)
	{
		printf("greater than 5\n", n, m);
	}
	else if (m == 0)
	{ 
		printf("zero\n");
	}
	else
	{	
		printf("less than 6 and not 0\n", n, m);
	}
	return (0);
}

