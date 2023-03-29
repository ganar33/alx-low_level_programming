#include "main.h"

/**
 * _islower - Check if lowercase.
 * @c: checked element.
 * Return: 1 lowercase, 0 if not.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
