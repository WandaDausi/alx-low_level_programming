#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string
 * @s: the string to be printed
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * pali_ndrme - if a string is a palindrime
 * @s: string to be checked
 * @i: int
 * @j: int
 * Return: 1 or 0
 */
int pali_ndrme(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (pali_ndrme(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - if a string is palindrome
 * @s: adress for string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	return (pali_ndrme(s, 0, _strlen_recursion(s) - 1));
}
