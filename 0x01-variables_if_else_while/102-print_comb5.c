#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0 Always Success
 */
int main(void)
{
	int i, j, k, l, m;

	for (i = 0; i < 100; i++)
	{
		j = i / 10;
		k = i / 10;
		if (i < k)
		{
			putchar(j + '0');
			putchar(k + '0');
			if (i < 99)
			{
				putchar(32);
			}
		}
		l = i / 10;
		m = i % 10;
		if (l < m)
		{
			putchar(l + '0');
			putchar(m + '0');
			if (i < 99)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
