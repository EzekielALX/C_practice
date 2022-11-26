#include <stdio.h>
/**
 * main - entrypoint
 * Description: program that prints all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		if (n != '3')
		{
			putchar(n);
		
		}
		n++;
	}
	putchar('\n');
	return (0);
}

