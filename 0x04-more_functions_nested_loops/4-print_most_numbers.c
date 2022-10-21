#include "main.h"

/**
* print_most_numbers - prints the numbers 0 to 9
* Return: void
*/

void print_most_numbers(void)
{
	int i = 48;

	for (; i < 58; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar(10);
}
