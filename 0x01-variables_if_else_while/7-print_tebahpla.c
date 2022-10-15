#include <stdio.h>

/**
* main - main function
* Return: 0 on success
*/

int main(void)
{
	char i = 'z';

	for (; i >= 'a'; i--)
		putchar(i);
	putchar(10);
	return (0);
}
