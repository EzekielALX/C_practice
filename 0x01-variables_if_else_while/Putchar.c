#include <unistdio.h>
/*
 * _putchar - prints char c on stdout
 *
 * @c: character printed
 *
 * Return: 0 on success 
 * -1 of fail
 */
int _putchar (char c)
{
	return (write (1, &c, 1));
}

