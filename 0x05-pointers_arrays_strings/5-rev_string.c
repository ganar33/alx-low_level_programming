#include "main.h"

/**
 * rev_string - rev str
 * @s: str
*/

void rev_string(char *s)
{
	int i, len = strlen(s), j = 0;
	char tmp;

	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j++;
	}
}
