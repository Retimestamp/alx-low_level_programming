#include <stdio.h>

/**
* main - main function
* Return: 0 on success
*/

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(' ');
		}
		i++;
	}
	putchar(10);
	return (0);
}
