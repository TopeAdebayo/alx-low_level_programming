#include "main.h"

/**
 * print_number - print number as char using _puthcar
 * @n: input integer
 * Return: Nil
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);

	}
	_putchar((n1 % 10) + '0');
}