#include <stdio.h>

/**
 * main - Entry Point
 * Result: Always (0) Success
 */
int main(void)
{
	int a, b, c;
	a = 0;

	while (a < 100)
	{
		b = a / 10;
		c = b % 10;

		if (b < c)
		{
			putchar(b + '0');
			putchar(c + '0');
		
		if (a < 89)
		{
			putchar(44);
			putchar(32);
		}
		}
		a++;
	}
	putchar('\n');
return (0);
}
