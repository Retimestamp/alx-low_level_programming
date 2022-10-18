#include <stdio.h>

/**
* main - main function
* Return: 0 on success
*/

int main(void)
{
	unsigned long i = 2, a = 1, b = 2, c = 0;
	unsigned long a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0;

	printf("1, 2, ");
	while (i < 98)
	{
		if (a + b < 7000000000000000000)
		{
			printf("%lu, ", (a + b));
			c = a;
			a = b;
			b += c;
		}
		else
		{
			if (a1 == 0)
				a1 = (a / 1000), a2 = (a % 1000), b1 = (b / 1000), b2 = (b % 1000);
			c1 = a1, c2 = a2, a1 = b1, a2 = b2;
			b1 += c1, b2 += c2;
			if (b2 > 1000)
				b1 += b2 / 1000, b2 %= 1000;
			printf("%lu", b1);
			if (b2 < 100)
				printf("0");
			printf("%lu", b2);
			if (i < 97)
				printf(", ");
		}
		i++;
	}
	putchar(10);
	return (0);
}
