#include"main.h"

/**
 * cap_string - capitalize string words
 * @s: string
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
		{
			i++;
		}

		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'
		   || s[i] == ',' || s[i] == ';' || s[i] == '.'
		   || s[i] == '?' || s[i] == '!' || s[i] == '"'
		   || s[i] == '(' || s[i] == ')' || s[i] == '{'
		   || s[i] == '}' || i == 0)
		{
			s[i] -=  32;
		}

		i++;
	}

	return (s);
}
