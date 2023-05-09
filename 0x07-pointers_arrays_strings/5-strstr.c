#include "main.h"

/**
 * _strstr - locates a substring. finds the first occurrence of the substring
 * needle in the string haystack. The terminating null bytes
 * (\0) are not compared
 * @haystack: scanned string
 * @needle: string to be found
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *s1, *s2;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			s1 = haystack;
			s2 = needle;

			while (*s1 != '\0' && *s2 != '\0')
			{
				if (*s1 != *s2)
				{
					break;
				}

				s1++;
				s2++;
			}

			if (*s2 == '\0')
			{
				return (haystack);
			}
		}

		haystack++;
	}

	return (0);
}
