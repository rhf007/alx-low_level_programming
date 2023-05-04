#include"main.h"

/**
 * rev_string - reverse a string
 * @s: the string
 */
void rev_string(char *s)
{
	int lencount;
	int i;
	char rev = s[0];

	while (s[lencount] != '\0')
	{
		lencount++;
	}

	for (i = 0; i < lencount; i++)
	{
		lencount--;
		rev = s[i];
		s[i] = s[lencount];
		s[lencount] = rev;
	}
}
