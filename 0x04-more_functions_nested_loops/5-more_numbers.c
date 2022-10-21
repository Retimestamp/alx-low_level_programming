#include "main.h"

/**
* more_numbers - prints the numbers 1 to 14 10 times over
* Return: void
*/

void more_numbers(void)
{
	int i, j, k = 0;

	while (k < 10)
	{
		k++;
		j = 48;
		i = 48;
		while (j < 63)
		{
			if (j > 57)
				_putchar(49), i = j - 10;
			_putchar(i++), j++;
		}
		_putchar(10);
	}
}
