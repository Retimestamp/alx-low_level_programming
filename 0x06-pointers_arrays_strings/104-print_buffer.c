#include <stdio.h>
#include "main.h"

/**
* print_buffer - prints a buffer
* @b: pointer to buffer
* @size: size of buffer
* Return: void
*/

void print_buffer(char *b, int size)
{
	int i, p = 0;
	char cb[10];

	while (p < size && size > 0)
	{
		if (size - p > 10)
			for (i = 0; i < 10; i++)
				*(cb + i) = *(b + i + p);
		else
			for (i = 0; i < size - p; i++)
				*(cb + i) = *(b + i + p);
		printf("%.8x: ", p);
		for (i = 0; i < 10; i += 1)
		{
			if (i < size - p && i % 2)
				printf("%.2x ", *(cb + i));
			else if (i < size - p)
				printf("%.2x", *(cb + i));
			else if (i % 2)
				printf("   ");
			else
				printf("  ");
		}
		for (i = 0; i < 10 && i < size - p; i++)
		{
			if (*(cb + i) > 31)
				putchar(*(cb + i));
			else
				putchar('.');
		}
		putchar(10), p += 10;
	}
	if (size <= 0)
		putchar(10);
}
