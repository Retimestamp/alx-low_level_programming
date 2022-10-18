#include <stdio.h>

/**
* main - main function
* Return: 0 on success
*/

int main(void)
{
	int i = 0, a = 0;

	while (i < 1024)
	{
		if (!(i % 3) || !(i % 5))
		{
			a += i;
		}
		i++;
	}
	printf("%d\n", a);
	return (0);
}
