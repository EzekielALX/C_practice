#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entrypoint
 *
 * discription - This program will assign a random number to the variable n each time it is executed
 *
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
	{
		printf("last digit of %i is %i and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("last digit of %i is %i and is zero\n", n, last);
	}
	else if (last < 6)
	{
	printf("last digit of %i is %i and is less than 6 not 0\n", n, last);
	}
	return (0);
}

