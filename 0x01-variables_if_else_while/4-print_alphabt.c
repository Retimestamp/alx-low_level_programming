#include <stdio.h>

/**
* main - main function
* Return: 0 on success
*/

int main(void)
{
	char i = 'a';

	for (; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar(10);
	return (0);
}
