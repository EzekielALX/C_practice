#include <stdio.h>

/**
 * main - entrypoint
 * Description: print lowercase except e and q
 * Return: 0/
 */
int main(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		if (n != 'e' && n != 'q')
		{
			putchar(n);
		}
		n++;
	}
	putchar ('\n');
	return (0);
}

