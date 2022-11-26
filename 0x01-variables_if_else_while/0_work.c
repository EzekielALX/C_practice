#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entrypoint
 * Desription: assign a random number to the variable n
 * Return: 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d and is greater than zero\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d and is less than zero\n", n);
	}
	return (0);
}

