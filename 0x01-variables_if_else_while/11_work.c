#include <stdio.h>
/**
 *
 *
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48; a  < 57; a++)
	{
		for (c = a + 1; c <= 57; c++)
		{
			for (b = c + 1; b <= 57; b++)
			{
				putchar(a);
				putchar(c);
				putchar(b);

				if ((a == 55) && (c == a + 1) && (b == c +1))
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

