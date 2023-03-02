#include "main.h"

/**
 * cap_string - function that capitalizes all words in a string
 * @str: string
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int i;

	while (str[i])
	{
	for (i = 0; str[i] >= 'a' && str[i] <= 'z'; i++)
	{
		if (str[i - 1] == ' ' || str[i - 1] == '\t')
		else if (str[i - 1] == '\n' || str[i - 1] == ',')
		else if (str[i - 1] == ';' || str[i - 1] == '.')
		else if (str[i - 1] == '!' || str[i - 1] == '?')
		else if (str[i - 1] == '"' || str[i - 1] == '(')
		else if (str[i - 1] == ')' || str[i - 1] == '{')
		else if (str[i - 1] == '}' || str[i - 1] == '0')
			str[i] -= 32;
	}
	i++;
	return (str);
}
