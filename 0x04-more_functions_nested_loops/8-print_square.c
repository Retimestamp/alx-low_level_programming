#include "main.h"

/**
* print_square - prints a square of size n
* @size: numerical input
* Return: void
*/

void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size > 0)
	{
		while (j < size)
		{
			while (i < size)
				_putchar(35), i++;
			_putchar(10);
			j++;
			i = 0;
		}
	}
	else
	{
		_putchar(10);
	}
}
