#include <stdio.h>
/**
 * main - entrypoint
 * Desription: alpha in reverse
 * Return: 0
 */
int main(void)
{
	int n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}

