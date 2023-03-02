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

	for (i = 0; str[i]; i++)
	for (; str[i] >= 'a' && str[i] <= 'z'; i++)
	{
		if (str[i - 1] == ' ' || str[i - 1] == '\t')
		if (str[i - 1] == '\n' || str[i - 1] == ',')
		if (str[i - 1] == ';' || str[i - 1] == '.')
		if (str[i - 1] == '!' || str[i - 1] == '?')
		if (str[i - 1] == '"' || str[i - 1] == '(')
		if (str[i - 1] == ')' || str[i - 1] == '{')
		if (str[i - 1] == '}' || str[i - 1] == '0')
			str[i] -= 32;
	}
	return (str);
}
