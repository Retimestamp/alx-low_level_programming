#include <stdio.h>

/**
* main - main function
* Return: 0 on success
*/

int main(void)
{
	int l = 48;
	int k = 48;
	int j = 48;
	int i = 48;

	for (; l < 58; l++)
	{
		for (; k < 58; k++)
		{
			for (; j < 58; j++)
			{
				for (; i < 58; i++)
				{
					if (l != j || i != k)
					{
						putchar(l);
						putchar(k);
						putchar(' ');
						putchar(j);
						putchar(i);
					}
					if ((l != '9' || k != '8' || j != '9' || i != '9') && (l != j || i != k))
					{
						putchar(44);
						putchar(' ');
					}
				}
				i = 48;
			}
			i = k + 1;
			j = l;
		}
		k = 48;
	}
	putchar(10);
	return (0);
}
