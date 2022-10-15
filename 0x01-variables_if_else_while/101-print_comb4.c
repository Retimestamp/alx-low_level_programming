#include <stdio.h>

/**
* main - main function
* Return: 0 on success
*/

int main(void)
{
	int i = 50;
	int j = 49;
	int k = 48;

	for (; k < 56; k++)
	{
		for (; j < 57; j++)
		{
			for (; i < 58; i++)
			{
				if (i != j && j != k)
				{
					putchar(k);
					putchar(j);
					putchar(i);
					if (k != '7' || j != '8' || i != '9')
					{
						putchar(44);
						putchar(' ');
					}
				}
			}
			i = j + 1;
		}
		j = k + 1;
		i = j + 1;
	}
	putchar(10);
	return (0);
}
