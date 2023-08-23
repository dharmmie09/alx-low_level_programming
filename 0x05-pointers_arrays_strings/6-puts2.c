#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts2 - code to print other character
 * @str: the string value
 *
 */

void puts2(char *str)
{
	int i = strlen(str);
	int j = 0;

	while (j < i)
	{

		putchar(str[j]);
		j += 2;
	}
	putchar ('\n');
}
