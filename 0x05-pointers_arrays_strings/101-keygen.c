#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
* main - main function
* Return: zero on success
*/

int main(void)
{
	int i;
	char r[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	srand(time(NULL));
	for (i = 0; i < 4; i++)
		putchar(r[rand() % 63]);
	return (0);
}
