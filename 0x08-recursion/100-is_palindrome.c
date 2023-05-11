#include"main.h"
int find_len(char *s);
int my_palindrome(char *s, int l, int r);

/**
 * is_palindrome - check if a string is palindrome
 * @s: string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len = find_len(s);

	if (*s == 0)
	{
		return (1);
	}

	return (my_palindrome(s, 0, len));
}

/**
 * find_len - gets length of string
 * @s: string
 * Return: string length
 */
int find_len(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += find_len(s + 1);
	}

	return (len);
}

/**
 * my_palindrome - actual palindrome-checking function
 * @s: string to be checked
 * @l: first/lower index
 * @r: last/higher index
 * Return: 1 if palindrome, 0 if not
 */
int my_palindrome(char *s, int l, int r)
{
	if (*(s + l) != *(s + r - 1))
	{
		return (0);
	}

	if (l >= r)
	{
		return (1);
	}

	return (my_palindrome(s, (l + 1), (r - 1)));
}
