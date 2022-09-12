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

	if (m > 5)
	{
		printf("Last digit of is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{ 
		printf("Last digit of is %d and is zero\n");
	}
	else
	{	
		printf("Last digit of is %d and is `less than 6 and 0\n", n, m);
	}
	return (0);
}

