#include <stdio.h>

/**
* main - main function
* Return: 0 on success
*/

int main(void)
{
	long i = 2, a = 1, b = 2, c = 0;

	printf("1, 2, ");
	while (i < 50)
	{
		printf("%ld", (a + b));
		c = a;
		a = b;
		b += c;
		i++;
		if (i < 50)
			printf(", ");
	}
	putchar(10);
	return (0);
}
