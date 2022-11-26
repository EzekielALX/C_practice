#include <stdio.h>
#include <stdlib.h>

/**
 * main - entrypoint
 *
 * Description:a program that prints all possible combinations of
 * single-digit numbers
 * Return: 0
 */
int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);

	if (number == 57)
	{
		break;
	}

	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}

