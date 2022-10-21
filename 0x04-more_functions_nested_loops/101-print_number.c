#define N 1000000000
#include "main.h"

/**
* to_ascii - turns a number to it's ascii value
* @n: numerical input
* Return: the ascii value of the number
*/

int to_ascii(int n)
{
	return (n + 48);
}

/**
* print_number - prints a number
* @n: numerical input
* Return: void
*/

void print_number(int n)
{
	int i = 1, a = 0, p = 10, r = 0;
	int c;

	if (n > 2000000000 || n < -2000000000)
	{
		i = 0;
		while (N / p >= 10)
			p *= 10, i++;
		p = 1, print_number(n / 1000);
		if (n < 0)
			c = (n % N) * -1;
		else
			c = n % N;
		while (c / p >= 10)
			p *= 10, i--;
		for (; i > 0; i--)
			_putchar('0');
		n = c;
		print_number(n % 1000);
		return;
	}
	if (n < -9)
		_putchar('-'), n = -n;
	else if (n >= 0 && n < 10)
		_putchar(n + '0'), r++;
	else if ((n < 0 && n > -10))
		_putchar('-'), _putchar((n * -1) + '0'), r++;
	if (r)
		return;
	while (n / p >= 10)
		p *= 10, i++;
	p = 1;
	while (i >= 0)
	{
		for (a = i; a > 0; a--)
			p *= 10;
		c = (n / p) % 10;
		p = 1;
		_putchar(c + '0'), i--;
	}
}
