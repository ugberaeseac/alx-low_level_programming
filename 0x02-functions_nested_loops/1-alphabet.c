#include "main.h"

/**
 * main - print_alphabet in lowercase using only _putchar
 * Return: 0 Success
 */
void print_alphabet(void)
{
        char c ='a';

        while (c <= 'z')
        {
                _putchar(c);
                c++;
        }
        _putchar('\n');
}
int main(void)
{
        print_alphabet();
        return 0;
}
