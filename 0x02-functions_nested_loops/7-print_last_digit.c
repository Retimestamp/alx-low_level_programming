#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @n: numerical input
* Return: returns the last digit of a number
*/

int print_last_digit(int n)
{
	int r = (n % 10);

	if (r < 0)
		r *= -1;

	_putchar('0' + r);
	return (r);
}
