#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description:program will assign a random number to the variable n,
 * each time it is executed
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d and is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d and is negative\n", n);
	}
	else
	{
		printf("%d and is zero\n", n);
	}
	return (0);
}

