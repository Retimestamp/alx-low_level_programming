#include "main.h"

/**
* jack_bauer - prints every minute of a day
* Return: void
*/

void jack_bauer(void)
{
	int l = '0';
	int k = '0';
	int j = '0';
	int i = '0';

	while (l != '2' || k != '4' || j != '0' || i != '0')
	{
		_putchar(l);
		_putchar(k);
		_putchar(':');
		_putchar(j);
		_putchar(i);
		_putchar(10);

		i++;
		if (i > '9')
			i = '0', j++;
		if (j > '5')
			j = '0', k++;
		if (k > '9')
			k = '0', l++;
	}
}
