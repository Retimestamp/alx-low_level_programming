#include "main.h"

/**
* print_number - prints an integer
* @n: numeric input
* Return: void
*/

void print_number(int n)
{
	int i, p = 1;

	if (n < 0)
	{
		_putchar('-');
		for (i = 0; n / p <= -10; i++)
			p *= 10;
	}
	else
	{
		for (i = 0; n / p >= 10; i++)
			p *= 10;
	}
	if (p < 0)
		p = -p;
	for (; i >= 0; i--, p /= 10)
	{
		if (n < 0)
			_putchar('0' + -((n / p) % 10));
		else
			_putchar('0' + ((n / p) % 10));
	}
}
