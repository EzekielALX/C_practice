#include <stdio.h>
/**
 * main - entrypoit
 * Description: program that prints the alphabet in lowercase, and then in uc
 * Return:0
 */
int main(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		putchar (n);
		n++;
	}
	n = 'A';

	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	putchar ('\n');

	return (0);
}

