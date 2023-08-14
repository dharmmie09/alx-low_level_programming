#include <stdio.h>

/**
 * main - prints alphabet between a to z
 *
 * Description: To print all alphabet from a to z
 * Return: Always 0 (success)
 */
int main(void)
{
	char g;

	for (g = 'a'; g <= 'z'; g++)
	{
		putchar (g);
	}
	putchar('\n');
	return (0);
}
