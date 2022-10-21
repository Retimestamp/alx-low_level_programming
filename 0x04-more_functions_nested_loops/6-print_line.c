#include "main.h"

/**
* print_line - prints a line of length n
* @n: numerical input
* Return: void
*/

void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			n--;
			_putchar(95);
		}
	}
	_putchar(10);
}
