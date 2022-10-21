#include <stdio.h>

/**
* main - main function
* Return: 0 on success
*/

int main(void)
{
	long i = 2;
	long n = 612852475143;

	while (i < n)
	{
		if (!(n % i))
		{
			n = n / i;
			i = 1;
		}
		i++;
	}
	printf("%ld\n", n);
	return (0);
}
