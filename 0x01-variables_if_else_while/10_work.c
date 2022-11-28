#include <stdio.h>
/**
 *
 *
 *
 */
int main(void)
{
	int a;
	int b = 0;
	
	while (b < 10)
	{
		a = 0;
		while (a < 10)
		{
			if (b != a && b < a)
			{
				putchar('0' + b);
				putchar('0' + a);

				if (b + a != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}
			a++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}

