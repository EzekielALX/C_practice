#include <stdio.h>
#include <stdlib.h>

/**
 * main - entrypoint
 * Description:a program that prints all possible different
 * combinations of three digits.
 *  Numbers must be separated by ,, followed by a space
 *  The three digits must be different
 *  012, 120, 102, 021, 201, 210 are considered the same combination
 * of the three digits 0, 1 and 2
 *  Print only the smallest combination of three digits
 *  Numbers should be printed in ascending order, with three digits
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48; a <= 57; a++)
	{
		for (c = a + 1; c <= 57; c++)
		{
			for (b = c + 1; b <= 57; b++)
			{
				putchar(a);
				putchar(c);
				putchar(b);


			if ((a == 55) && (c == a + 1) && (b == c + 1))
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

