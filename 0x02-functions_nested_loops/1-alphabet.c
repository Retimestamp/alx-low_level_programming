#include "main.h"

/**
* print_alphabet - prints the alphabet
* Return: void
*/

void print_alphabet(void)
{
	int i = 97;

	while (i <= 'z')
	{
		_putchar(i++);
	}
	_putchar(10);
}
