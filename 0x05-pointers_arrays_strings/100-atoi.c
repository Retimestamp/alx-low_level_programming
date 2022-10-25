#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: string input
* Return: 0 if there are no numbers in the string
*/

int _atoi(char *s)
{
	int i, m = 0, n = 0, p = 1, r = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) <= '9' && *(s + i) >= '0')
			n++;
		if (n && (*(s + i) > '9' || *(s + i) < '0'))
			break;
	}

	if (!n)
		return (0);
	if (*(s + i) == '\0')
		i--;
	for (; i >= 0; i--)
	{
		int c = *(s + i);

		if (c == '-')
			m++;
		if (c >= '0' && c <= '9')
		{
			if (-r + ((c - 48) * -p) == -2147483648)
				return (-r - ((c - 48) * p));
			r += (c - 48) * p;
			if (p != 1000000000)
				p *= 10;
		}
	}
	if (m && m % 2)
		r = -r;
	return (r);
}
