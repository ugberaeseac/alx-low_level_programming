#include "main.h"

/**
 * _wild_cmp_check - function to check if two strings are identical
 * @s1: string 1
 * @s2: string 2
 * @i: index of s1
 * @j: index of s2
 *
 * Return: 1 if identical, 0 if otherwise.
 */
int _wild_cmp_check(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (_wild_cmp_check(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (_wild_cmp_check(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (_wild_cmp_check(s1, s2, i + 1, j) ||
				_wild_cmp_check(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp - check if strings could be considered identical
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 if identical otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	return (_wild_cmp_check(s1, s2, 0, 0));
}
