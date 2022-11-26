#include <stdio.h>
#include <stdlib.h>

/**
 * main - block
 *
 * Description:script that print the alpha in lc except p and q
 *
 * Return:0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}

