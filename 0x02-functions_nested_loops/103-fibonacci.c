#include <stdio.h>

/**
* main - main function
* Return: 0 on success
*/

int main(void)
{
	long i = 2, a = 1, b = 2, c = 0;

	while ((b + a) < 4000000)
	{
		c = a;
		a = b;
		b += c;
		if (b % 2)
			i += b;
	}
	printf("%ld\n", i);
	return (0);
}
