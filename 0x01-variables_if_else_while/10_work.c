#include <stdio.h>

/**
 * main - entrypoint
 * Description:program that prints all possible different combinations of 2 num
 * Return: 0
 */

int main(void)
{
	int n;

	int m = '0';
	while (m < 10)
	{
		n = '0';
		while (n < 10)
		{
			if (m != n && m < n)
			{
				putchar('0' + m);
				putchar('0' + n);

				if (m + n != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}

