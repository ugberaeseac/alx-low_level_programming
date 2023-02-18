#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
	putchar(a + '0');
	if (a < 9)
	{
		putchar(44);
		putchar(32);
	}
	}
	putchar('\n');
	return (0);
}
