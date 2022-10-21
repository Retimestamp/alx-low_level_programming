#include "main.h"

/**
* print_diagonal - prints a diagonal line of length n
* @n: numerical input
* Return: void
*/

void print_diagonal(int n)
{
	int i;
	int j = 0;

	if (n > 0)
	{
		while (j < n)
		{
			for (i = 0; i < j; i++)
				_putchar(' ');
			_putchar(92);
			_putchar(10);
			j++;
		}
	}
	else
	{
		_putchar(10);
	}
}
