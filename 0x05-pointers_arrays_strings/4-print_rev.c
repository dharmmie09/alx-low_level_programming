#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - is the function
 * @s: is the pointe
 */

void print_rev(char *s)
{
	char *ptr = s + strlen(s) - 1;

	while (ptr >= s)
	{
		putchar(*ptr);
		ptr--;
	}
	putchar ('\n');
}
