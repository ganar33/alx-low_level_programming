#include "main.h"

/**
 * _strcpy - copies the pointed str
 * @dest: copy of str
 * @src: srs of str
 * Return: dest cpy
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
