#include "main.h"

/**
* pspace - add a space to output n times
* @n: numerical input
* Return: void
*/

void pspace(int n)
{
	for (; n > 0; n--)
		_putchar(' ');
}



/**
* print_times_table - prints a times table for 9
* @n: numerical input
* Return: void
*/



void print_times_table(int n)
{
	int i = 0, j = 0;

	if (n < 0 || n > 15)
		return;
	while (j < (n + 1))
	{
		while (i < (n + 1))
		{
			int v = i * j, c = v / 10;

			if (n == 0)
			{
				_putchar('0');
				_putchar(10);
				return;
			}
			if (i == 0)
				_putchar('0'), _putchar(',');
			else if (v < 10)
			{
				pspace(3);
				_putchar('0' + v);
			}
			else if (v >= 10 && v < 100)
			{
				pspace(2);
				_putchar('0' + (v / 10)), _putchar('0' + (v % 10));
			}
			else if (v >= 100)
			{
				_putchar(' '), _putchar('0' + (c / 10));
				_putchar('0' + (c % 10)), _putchar('0' + (v % 10));
			}
			if (i < n && i != 0)
				_putchar(',');
			i++;
		}
		i = 0, j++;
		_putchar(10);
	}
}

