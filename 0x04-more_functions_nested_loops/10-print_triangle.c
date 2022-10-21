#include "main.h"

/**
* print_triangle - prints a triangle of size n
* @size: numerical input
* Return: void
*/

void print_triangle(int size)
{
	if (size > 0)
	{
		int h = 1;
		int i = 0;

		while (size > 0)
		{
			for (i = size - 1; i > 0; i--)
				_putchar(' ');
			for (i = h; i > 0; i--)
				_putchar(35);
			_putchar(10);
			size--;
			h++;
		}
	}
	else
	{
		_putchar(10);
	}
}

