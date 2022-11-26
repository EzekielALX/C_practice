#include <stdio.h>

/**
 * main - entrypoint
 * Description:a program that prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	int n;

	n = 'a';
	
	while(n <= 'z')
		{
			putchar(n);
			n++;
		}
	putchar ('\n');
	return (0);
}

