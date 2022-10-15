#include <stdio.h>

/**
* main - main function
* Return: 0 on success
*/

int main(void)
{
	char i = '0';

	for (; i <= '9'; i++)
		putchar(i);
	i = 'a';
	for (; i <= 'f'; i++)
		putchar(i);
	putchar(10);
	return (0);
}
