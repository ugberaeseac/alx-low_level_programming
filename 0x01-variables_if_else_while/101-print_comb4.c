#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 10; i < 1000; i++)
	{
		j = i / 100;
		k = (i / 10) % 10;
		l = i % 10;
		if (j < k && k < l)
		{
			putchar(i + '0');
			putchar(k + '0');
			putchar(l + '0');
			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
