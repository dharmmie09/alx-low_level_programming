#include "main.h"
#include <stddef.h>
/**
 * _strchr -is used for search of chracter
 * @s: is the string value
 * @c: is the character used
 * Return: as specified
 */
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;

	}
	return (0);
}


