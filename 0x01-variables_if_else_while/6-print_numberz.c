#include <stdlib.h>
#include <stdio.h>

/**
 * main - entrypoint
 *
 * Description:script that prints all single digit numbers of base 10,
 * starting from 0,
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
