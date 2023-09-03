#include <stdio.h>
/**
 * main - is the argument name
 * @argc: is the argument that accept command
 * @argv: is the array
 * Return: as 0 
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
