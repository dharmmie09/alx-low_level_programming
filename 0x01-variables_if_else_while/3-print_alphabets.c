#include <stdio.h>

/**
 * main - Prints alphabet among a to z
 *
 * Description: To print all alphabets from a to z
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
