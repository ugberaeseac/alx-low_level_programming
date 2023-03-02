#include "main.h"

/**
 * cap_string - function that capitalizes all words in a string
 * @str: string
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			index++;
	if (str[i - 1] == ' ' || str[i - 1] == '\t'
	|| str[i - 1] == '\n' || str[i - 1] == ','
	|| str[i - 1] == ';' || str[i - 1] == '.'
	|| str[i - 1] == '!' || str[i - 1] == '?'
	|| str[i - 1] == '"' || str[i - 1] == '('
	|| str[i - 1] == ')' || str[i - 1] == '{'
	|| str[i - 1] == '}' || str[i - 1] == '0')
		str[i] -= 32;
		i++;
	}

	return (str);
}
