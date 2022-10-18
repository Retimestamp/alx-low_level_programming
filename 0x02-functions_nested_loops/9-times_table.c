#include "main.h"

/**
* times_table - prints a times table for 9
* Return: void
*/

void times_table(void)
{
	int i = 0;
	int j = 0;

	while (j < 10)
	{
		while (i < 10)
		{
			int v = i * j;

			if (i == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			else if (v < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + v);
			}
			else if (v >= 10 && v < 100)
			{
				_putchar(' ');
				_putchar('0' + (v / 10));
				_putchar('0' + (v % 10));
			}
			if (i < 9 && i != 0)
				_putchar(',');
			i++;
		}
		j++;
		i = 0;
		_putchar(10);
	}
}

