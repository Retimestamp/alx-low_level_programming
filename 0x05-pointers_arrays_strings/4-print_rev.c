#include "main.h"

/**
* print_rev - prints a string in reverse
* @s: string input
* Return: void
*/

void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		i = i;
	if (i == 0)
		for (; i > 0; i--)
			_putchar(*(s + i));
	else
		for (i--; i >= 0; i--)
			_putchar(*(s + i));
	_putchar(10);
}
