#include "main.h"

/**
* _pow - returns the power of two numbers
* @a: numeric input
* @b: numeric input
* Return: a to the power of b
*/

int _pow(int a, int b)
{
	int i, r = a;

	for (i = b; i > 1; i--)
		r *= a;
	return (r);
}
/**
* print_array - prints the first n numbers of an array
* @a: numeric array input
* @n: numeric input
* Return: void
*/

void print_array(int *a, int n)
{
	int i, c, p, j = 0;

	for (i = 0; i < n; i++)
	{
		j = 0;
		c = *(a + i);
		if (c < 0)
			_putchar('-'), c = -c;
		for (p = 1; c / p >= 10; j++)
			p *= 10;
		for (; j >= 0; j--)
			_putchar('0' + ((c / p) % 10)), p /= 10;
		if (i != n - 1)
			_putchar(','), _putchar(' ');
	}
	_putchar(10);
}
