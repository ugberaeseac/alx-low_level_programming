#include <stdio.h>

/**
 *  main - Entry Point
 *  Return: 0 Success
 */
int main(void)
{
	char c;
	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c <= 'A')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
