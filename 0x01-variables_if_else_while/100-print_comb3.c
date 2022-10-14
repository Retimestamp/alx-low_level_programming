#include <stdio.h>

/**
* main - main function
* Return: 0 on success
*/

int main(void)
{
	int i = 48;
	int j = 48;

	for (; j < 57; j++)
	{
		for (; i < 58; i++)
		{
			if (i != j)
			{
				putchar(j);
				putchar(i);
				putchar(44);
				putchar(' ');
			}
		}
		i = j + 1;
	}
	putchar(10);
}
